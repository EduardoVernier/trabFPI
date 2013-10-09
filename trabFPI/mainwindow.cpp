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

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
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
    QImage resized = m.scaled (ui->modifiedGV->width()-3,ui->modifiedGV->height()-3,Qt::KeepAspectRatio);

    QGraphicsScene *toBeShown = new QGraphicsScene();
    toBeShown->addPixmap(QPixmap::fromImage(resized));
    ui->modifiedGV->setScene(toBeShown);
}

void MainWindow::showImageO(QImage m)
{
    QImage resized = m.scaled (ui->originalGV->width()-3,ui->originalGV->height()-3,Qt::KeepAspectRatio);

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


void MainWindow::on_contrastSlider_sliderReleased()
{
    QImage m = getModified();
    float value;
    int sliderValue = ui->contrastSlider->value();
    if (sliderValue == 0)
        return;
    if (sliderValue<1)
        value = 1.0/(-sliderValue);
    else value = sliderValue;



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






















