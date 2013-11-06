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
    QObject::connect(&f, SIGNAL(applyLaplassian()), &w, SLOT(on_applyLaplassian()));

    w.show();

    return a.exec();
}
