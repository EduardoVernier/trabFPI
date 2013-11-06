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

void Filters::on_laplassianButton_clicked()
{
    this->applyLaplassian();
}
