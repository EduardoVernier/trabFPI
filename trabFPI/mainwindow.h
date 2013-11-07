#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setModified (QImage m);
    QImage getModified ();
    void showImageM(QImage m);
    void showImageO(QImage m);
    void inicializeImages();
    ~MainWindow();
    QString location;
    void applyFilter (float * values);

private slots:
    void on_hFlip_clicked();
    void on_vFlip_clicked();
    void on_quatizeButton_clicked();
    void on_openButton_clicked();
    void on_saveButton_clicked();
    void on_grayscaleButton_clicked();
    void on_brightnessSlider_sliderReleased();
    void on_negativeButton_clicked();
    void on_contrastSlider_sliderReleased();
    void on_calcHistButton_clicked();
    void on_eqHistButton_clicked();    
    void on_pushButton_clicked();
    void on_cwRotateButton_clicked();
    void on_ccwRotateButton_clicked();
    void on_zInButton_clicked();
    void on_filterButton_clicked();
    void on_zOutButtton_clicked();


public slots:
    void on_applyPHx();
    void on_applyGaussian ();
    void on_applyLaplacian ();
    void on_applyHighPass ();
    void on_applyPHyHx();


private:
    Ui::MainWindow *ui;
    QImage modified;
    int lastBrightnessValue;

signals:
    bool chooseFilter();
};

#endif // MAINWINDOW_H
