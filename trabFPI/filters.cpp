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

void Filters::on_embossCB_clicked()
{
    this->embossMe();
}

void Filters::on_SobelHxButton_clicked()
{
    this->applySHx();
}

void Filters::on_SobelHyButton_clicked()
{
    this->applySHy();
}

void Filters::on_pushButton_clicked()
{
    float i11 = ui->doubleSpinBox->value();
    float i12 = ui->doubleSpinBox_2->value();
    float i13 = ui->doubleSpinBox_3->value();
    float i21 = ui->doubleSpinBox_4->value();
    float i22 = ui->doubleSpinBox_5->value();
    float i23 = ui->doubleSpinBox_6->value();
    float i31 = ui->doubleSpinBox_7->value();
    float i32 = ui->doubleSpinBox_8->value();
    float i33 = ui->doubleSpinBox_9->value();
    float a [9] = {i11,i12,i13,i21,i22,i23,i31,i32,i33};

    this->applyCustom(a);
}
