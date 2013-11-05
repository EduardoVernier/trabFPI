#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImage>
#include <iostream>
#include <QGraphicsScene>
#include <string>
#include <QString>
#include <QFile>
using namespace std;
QString local;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    lastBrightnessValue = 0;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::inicializeImages()
{   
    QImage original (local);
    QImage modified (original.width(), original.height(), QImage::Format_RGB32);

    showImageO(original);

    //copies the original image to a modified one
    for (int i = 0; i < original.width(); i++)
        for (int j = 0; j < original.height();j++)
        {
            QRgb orValue = original.pixel(i,j);
            modified.setPixel(i,j,orValue);
        }

    showImageM(modified);
    setModified(modified);
}

QImage MainWindow::getModified()
{
    return modified;
}


void MainWindow::showImageM(QImage m)
{
    QImage resized;
    if (ui->fitCheck->isChecked()==1)
        resized = m.scaled (ui->modifiedGV->width()-3,ui->modifiedGV->height()-3,Qt::KeepAspectRatio);
    else
        resized = m;

    QGraphicsScene *toBeShown = new QGraphicsScene();
    toBeShown->addPixmap(QPixmap::fromImage(resized));
    ui->modifiedGV->setScene(toBeShown);
}

void MainWindow::showImageO(QImage m)
{
    QImage resized;
    if (ui->fitCheck->isChecked()==1)
        resized = m.scaled (ui->modifiedGV->width()-3,ui->modifiedGV->height()-3,Qt::KeepAspectRatio);
    else
        resized = m;

    QGraphicsScene *toBeShown = new QGraphicsScene();
    toBeShown->addPixmap(QPixmap::fromImage(resized));
    ui->originalGV->setScene(toBeShown);
}


void MainWindow::setModified(QImage m)
{
    modified = m;
}



void MainWindow::on_hFlip_clicked()
{
    QImage m = getModified();
    QRgb px;
    int i,j;

    for (int linha = 0; linha < m.height()-1; linha++)
        for (i = 0, j = m.width()-1; i < j; i++,j--)
        {
            px = m.pixel(i,linha);
            m.setPixel(i,linha,m.pixel(j,linha));
            m.setPixel(j,linha,px);
        }
    showImageM(m);
    setModified(m);
}


void MainWindow::on_vFlip_clicked()
{
    QImage m = getModified();
    QRgb px;
    int i,j;

    for (int coluna = 0; coluna < m.width()-1; coluna++)
        for (i = 0, j = m.height()-1; i < j; i++,j--)
        {
            px = m.pixel(coluna,i);
            m.setPixel(coluna,i,m.pixel(coluna,j));
            m.setPixel(coluna,j,px);
        }
    showImageM(m);
    setModified(m);
}


void MainWindow::on_quatizeButton_clicked()
{
    int nShades = ui->nShades->value();
    int red,green,blue;
    on_grayscaleButton_clicked();


    QImage m = getModified();
    if (nShades > 0)
        for (int y = 0; y < m.height()-1; y++)
            for (int x = 0; x < m.width()-1; x++)
            {
                QRgb px = m.pixel(x,y);

                red = qRed (px);
                green = qGreen (px);
                blue = qBlue (px);

                red = (red/(255/nShades))*(255/nShades/2);
                green = (green/(255/nShades))*(255/nShades/2);
                blue = (blue/(255/nShades))*(255/nShades/2);

                QRgb newPx = qRgb (red,green,blue);
                m.setPixel(x,y,newPx);
            }
    cout << qRed(m.pixel(10,10));
    setModified(m);
    showImageM(m);
}

void MainWindow::on_openButton_clicked()
{
    local = ui->lineEdit->text();
    inicializeImages();
}

void MainWindow::on_saveButton_clicked()
{
    QImage m = getModified();
    QFile file (local.remove(local.length()-4,local.length()-1).append("_mod"));
    file.open(QIODevice::WriteOnly);
    m.save(&file, "JPG");
}

void MainWindow::on_grayscaleButton_clicked()
{
    QImage m = getModified();
    //L = 0.299*R + 0.587*G + 0.114*B
    for (int y = 0; y < m.height()-1; y++)
        for (int x = 0; x < m.width()-1; x++)
        {
            QRgb px = m.pixel(x,y);
            int gray = qRed(px)*0.299 + qGreen(px)*0.587 + 0.114*qBlue(px);

            QRgb newPx = qRgb (gray,gray,gray);
            m.setPixel(x,y,newPx);
        }
    setModified(m);
    showImageM(m);
}



void MainWindow::on_negativeButton_clicked()
{

    QImage m = getModified();
    uint red,green,blue;
    QRgb px,newPx;
    for (int y = 0; y < m.height()-1; y++)
        for (int x = 0; x < m.width()-1; x++)
        {
            px = m.pixel(x,y);
            red = 255 - uint (qRed (px));
            green = 255 - uint (qGreen (px));
            blue = 255 - uint (qBlue (px));
            newPx = qRgb (red,green,blue);
            m.setPixel(x,y,newPx);
        }
    setModified(m);
    showImageM(m);
}

void MainWindow::on_brightnessSlider_sliderReleased()
{
    QImage m = getModified();
    int sliderValue = ui->brightnessSlider->value();
    int trueValue = sliderValue - lastBrightnessValue;
    int newRed, newGreen, newBlue;


    for (int y = 0; y < m.height()-1; y++)
        for (int x = 0; x < m.width()-1; x++)
        {
            QRgb px = m.pixel(x,y);
            newRed = qRed(px)+trueValue;
            if (newRed>255)
                newRed = 255;
            else
                if (newRed<0)
                    newRed = 0;

            newGreen = qGreen(px)+trueValue;
            if (newGreen>255)
                newGreen = 255;
            else
                if (newGreen<0)
                    newGreen = 0;

            newBlue = qBlue(px)+trueValue;
            if (newBlue>255)
                newBlue = 255;
            else
                if (newBlue<0)
                    newBlue = 0;


            QRgb newPx = qRgb (newRed,newGreen,newBlue);
            m.setPixel(x,y,newPx);
        }
    setModified(m);
    showImageM(m);
}


// -4    -3    -2     -1    0 1 2 3 4
// 1/5   1/4     1/3    1/2  1 2 3 4 5
void MainWindow::on_contrastSlider_sliderReleased()
{
    QImage m = getModified();
    float value;
    int sliderValue = ui->contrastSlider->value();

    switch (sliderValue)
    {
    case -4 : value = 1.0/5;  break;
    case -3 : value = 1.0/4;  break;
    case -2 : value = 1.0/3;  break;
    case -1 : value = 1.0/2;  break;
    case 0 : value = 1.0;  break;
    case 1 : value = 2.0;  break;
    case 2 : value = 3.0;  break;
    case 3 : value = 4.0;  break;
    case 4 : value = 5.0;  break;
    }




    int newRed, newGreen, newBlue;


    for (int y = 0; y < m.height()-1; y++)
        for (int x = 0; x < m.width()-1; x++)
        {
            QRgb px = m.pixel(x,y);
            newRed = qRed(px)*value;
            if (newRed>255)
                newRed = 255;
            else
                if (newRed<0)
                    newRed = 0;

            newGreen = qGreen(px)*value;
            if (newGreen>255)
                newGreen = 255;
            else
                if (newGreen<0)
                    newGreen = 0;

            newBlue = qBlue(px)*value;
            if (newBlue>255)
                newBlue = 255;
            else
                if (newBlue<0)
                    newBlue = 0;


            QRgb newPx = qRgb (newRed,newGreen,newBlue);
            m.setPixel(x,y,newPx);
        }
    setModified(m);
    showImageM(m);

}


void MainWindow::on_calcHistButton_clicked()
{
    on_grayscaleButton_clicked();
    QImage m = getModified();
    QRgb px, blue;
    int histogram [256], max=0;
    blue  = qRgb (0,0,255);

    {
        for (int i =0; i<256 ; i++)
            histogram [i] = 0;


        for (int y = 0; y < m.height()-1; y++)
            for (int x = 0; x < m.width()-1; x++)
            {
                px = m.pixel (x,y);
                histogram [qRed(px)]++;
                if (histogram[qRed(px)]>max)
                    max = histogram[qRed(px)];
            }
        showImageO(m);
        QImage n (256,256,QImage::Format_RGB32);


        for (int x = 0; x < 256; x++)
        {

            int y = 256 - ((255*histogram[x])/max+1);
            for (int i = y; i < 240; i++)
                n.setPixel(x,i, blue);
        }
        ui->originalGV->scene()->clear();
        showImageO(n);

    }
}


void MainWindow::on_eqHistButton_clicked()
{
    QImage m = getModified();
    QRgb px,newPx;
    int nRed, nGreen, nBlue;
    int histogram [3][256];

    for (int j = 0; j < 3; j++)
        for (int i =0; i < 256 ; i++)
            histogram [j][i] = 0;


    for (int y = 0; y < m.height()-1; y++)
        for (int x = 0; x < m.width()-1; x++)
        {
            px = m.pixel (x,y);
            histogram [0][qRed(px)]++;
            histogram [1][qGreen(px)]++;
            histogram [2][qBlue(px)]++;
        }

    for (int i = 1; i < 256; i++)
    {
        histogram [0][i] = histogram [0][i] + histogram [0][i-1];
        histogram [1][i] = histogram [1][i] + histogram [1][i-1];
        histogram [2][i] = histogram [2][i] + histogram [2][i-1];
    }

    for (int y = 0; y < m.height()-1; y++)
        for (int x = 0; x < m.width()-1; x++)
        {
            px = m.pixel (x,y);

            nRed = (histogram [0][qRed(px)])*(255.0/(m.height()*m.width()));
            nGreen = (histogram [1][qGreen(px)])*(255.0/(m.height()*m.width()));
            nBlue = (histogram [2][qBlue(px)])*(255.0/(m.height()*m.width()));

            newPx = qRgb (nRed,nGreen,nBlue);

            m.setPixel(x,y,newPx);

        }
    setModified(m);
    showImageM(m);
}



void MainWindow::on_cwRotateButton_clicked()
{
    QImage m = getModified();
    QImage newImage (m.height(),m.width(),  QImage::Format_RGB32);

    for (int i = 0; i < m.width(); i++)
        for (int j = 0; j < m.height();j++)
        {
            QRgb orValue = m.pixel(i,j);
            newImage.setPixel(m.height()-j-1,i,orValue);
        }

    setModified(newImage);
    showImageM(newImage);
}


void MainWindow::on_ccwRotateButton_clicked()
{
    QImage m = getModified();
    QImage newImage (m.height(),m.width(),  QImage::Format_RGB32);

    for (int i = 0; i < m.width(); i++)
        for (int j = 0; j < m.height();j++)
        {
            QRgb orValue = m.pixel(i,j);
            newImage.setPixel(j,m.width()-1-i,orValue);
        }

    setModified(newImage);
    showImageM(newImage);
}

void MainWindow::on_zInButton_clicked()
{
    QImage m = getModified();
    QImage newImage (m.width()*2-1,m.height()*2-1,  QImage::Format_RGB32);

    for (int x = 0, xNew = 0; x <= m.width(); x++, xNew = xNew + 2)
        for (int y = 0, yNew =0; y <= m.height();y++, yNew = yNew +2)
        {
            QRgb px = m.pixel(x,y);
            newImage.setPixel(xNew,yNew, px);
        }

    for (int xNew = 1; xNew <= newImage.width()-2; xNew = xNew + 2)
        for (int y = 0; y <= newImage.height(); y++)
        {
            QRgb px = newImage.pixel(xNew-1,y);
            QRgb nextPx = newImage.pixel(xNew+1,y);
            QRgb newPx = qRgb ( (qRed(px)+qRed(nextPx))/2, (qGreen(px)+qGreen(nextPx))/2 , (qBlue(px)+qBlue(nextPx))/2);

            newImage.setPixel(xNew,y, newPx);
        }

    for (int x = 0; x <=newImage.width(); x++)
        for (int yNew = 1; yNew <= newImage.height(); yNew = yNew + 2)
        {
            QRgb px = newImage.pixel(x,yNew-1);
            QRgb nextPx = newImage.pixel(x,yNew+1);
            QRgb newPx = qRgb ( (qRed(px)+qRed(nextPx))/2, (qGreen(px)+qGreen(nextPx))/2 , (qBlue(px)+qBlue(nextPx))/2);

            newImage.setPixel(x,yNew, newPx);
        }

    setModified(newImage);
    showImageM(newImage);
}

void MainWindow::on_zOutButtton_clicked()
{
    QImage m = getModified();
    float xV = ui->spinBox->value();
    float yV = ui->spinBox_2->value();
    int xD = m.width()/xV;
    int yD = m.height()/yV;
    QImage n (xD, yD, QImage::Format_RGB32);

    for (int x = 0; x < xD; x++)
        for (int y = 0; y < yD; y++)
        {
            int avgRed = 0, avgGreen = 0, avgBlue = 0;
            for (int i = 0; i < xV; i++)
                for (int j = 0; j < yV; j++)
                {
                    QRgb avgPx = m.pixel(x*xV + i, y*yV + j);
                    avgRed += qRed (avgPx)/ (xV*yV);
                    avgGreen += qGreen (avgPx)/ (xV*yV);
                    avgBlue += qBlue (avgPx)/ (xV*yV);

                }

            QRgb newPx = qRgb (avgRed,avgGreen,avgBlue);
            n.setPixel(x,y,newPx);
        }

    setModified(n);
    showImageM(n);



}


void MainWindow::on_filterButton_clicked()
{
    this->chooseFilter();

}

void MainWindow::on_applyGaussian ()
{
    float values [9] = {};
    applyFilter(values);
}

void MainWindow::applyFilter (float * values)
{
    on_eqHistButton_clicked();
}


