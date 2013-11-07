#include "filters.h"
#include "ui_filters.h"

Filters::Filters(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Filters)
{
    ui->setupUi(this);
}

Filters::~Filters()
{
    delete ui;
}

void Filters::on_gaussianButton_clicked()
{
    this->applyGaussian();
}

void Filters::on_LaplacianButton_clicked()
{
    this->applyLaplacian();
}

void Filters::on_hPButton_clicked()
{
    this->applyHP();
}

void Filters::on_pHxButton_clicked()
{
    this->applyPHx();
}

void Filters::on_pHyHxButton_clicked()
{
    this->applyPHyHx();
}
