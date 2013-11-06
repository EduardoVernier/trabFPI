#ifndef FILTERS_H
#define FILTERS_H

#include <QWidget>

namespace Ui {
class Filters;
}

class Filters : public QWidget
{
    Q_OBJECT

public:
    explicit Filters(QWidget *parent = 0);
    ~Filters();

private:
    Ui::Filters *ui;

signals:
    bool applyGaussian ();
    bool applyLaplassian ();

private slots:
    void on_gaussianButton_clicked();
    void on_laplassianButton_clicked();
};

#endif // FILTERS_H
