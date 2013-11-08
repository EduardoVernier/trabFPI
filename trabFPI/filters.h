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

//private:
    Ui::Filters *ui;

signals:
    bool applyGaussian ();
    bool applyLaplacian ();
    bool applyHP();
    bool applyPHx();
    bool applyPHyHx();
    bool embossMe();
    bool applySHx();
    bool applySHy();
    bool applyCustom(float * a);

private slots:
    void on_gaussianButton_clicked();
    void on_LaplacianButton_clicked();
    void on_hPButton_clicked();
    void on_pHxButton_clicked();
    void on_pHyHxButton_clicked();
    void on_embossCB_clicked();
    void on_SobelHxButton_clicked();
    void on_SobelHyButton_clicked();
    void on_pushButton_clicked();
};

#endif // FILTERS_H
