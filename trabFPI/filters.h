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
    bool applyLaplacian ();
    bool applyHP();
    bool applyPHx();
    bool applyPHyHx();

private slots:
    void on_gaussianButton_clicked();
    void on_LaplacianButton_clicked();
    void on_hPButton_clicked();
    void on_pHxButton_clicked();
    void on_pHyHxButton_clicked();
};

#endif // FILTERS_H
