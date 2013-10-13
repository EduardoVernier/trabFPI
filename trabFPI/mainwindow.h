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

private:
    Ui::MainWindow *ui;
    QImage modified;
    int lastBrightnessValue;
    QImage undoImage;
};

#endif // MAINWINDOW_H
