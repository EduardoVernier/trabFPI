#include "filters.h"
#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Filters f;

    // Connects filter button to widget
    QObject::connect(&w, SIGNAL(chooseFilter()), &f, SLOT(show()));

    // Selects a given filter in the widget and connects to a slot in the main window
    QObject::connect(&f, SIGNAL(applyGaussian()), &w, SLOT(on_applyGaussian()));
    QObject::connect(&f, SIGNAL(applyLaplacian()), &w, SLOT(on_applyLaplacian()));
    QObject::connect(&f, SIGNAL(applyHP()), &w, SLOT(on_applyHighPass()));
    QObject::connect(&f, SIGNAL(applyPHx()), &w, SLOT(on_applyPHx()));
    QObject::connect(&f, SIGNAL(applyPHyHx()), &w, SLOT(on_applyPHyHx()));
    QObject::connect(&f, SIGNAL(embossMe()), &w, SLOT(on_emboss()));
    QObject::connect(&f, SIGNAL(applySHx()), &w, SLOT(on_applySHx()));
    QObject::connect(&f, SIGNAL(applySHy()), &w, SLOT(on_applySHy()));
    QObject::connect(&f, SIGNAL(applyCustom(float*)), &w, SLOT(on_applyCustom(float*)));


    w.show();

    return a.exec();
}
