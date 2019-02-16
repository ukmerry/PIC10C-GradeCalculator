#include "gradecalculator.h"
#include "ui_gradecalculator.h"

GradeCalculator::GradeCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GradeCalculator)
{
    ui->setupUi(this);
}

GradeCalculator::~GradeCalculator()
{
    delete ui;
}

void GradeCalculator::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
}

void GradeCalculator::on_horizontalSlider_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(value);
}

void GradeCalculator::on_horizontalSlider_3_valueChanged(int value)
{
    ui->spinBox_3->setValue(value);
}

void GradeCalculator::on_horizontalSlider_4_valueChanged(int value)
{
    ui->spinBox_4->setValue(value);
}

void GradeCalculator::on_horizontalSlider_5_valueChanged(int value)
{
    ui->spinBox_5->setValue(value);
}
