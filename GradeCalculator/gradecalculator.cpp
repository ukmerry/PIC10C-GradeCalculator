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

void GradeCalculator::update_overall(int unused)
{
    return;
}

void GradeCalculator::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
    hw_scores[0] = arg1;
}

void GradeCalculator::on_spinBox_2_valueChanged(int arg1)
{
    ui->horizontalSlider_2->setValue(arg1);
    hw_scores[1] = arg1;
}

void GradeCalculator::on_spinBox_3_valueChanged(int arg1)
{
    ui->horizontalSlider_3->setValue(arg1);
    hw_scores[2] = arg1;
}

void GradeCalculator::on_spinBox_4_valueChanged(int arg1)
{
    ui->horizontalSlider_4->setValue(arg1);
    hw_scores[3] = arg1;
}

void GradeCalculator::on_spinBox_5_valueChanged(int arg1)
{
    ui->horizontalSlider_5->setValue(arg1);
    hw_scores[4] = arg1;
}

void GradeCalculator::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
    hw_scores[0] = value;
}

void GradeCalculator::on_horizontalSlider_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(value);
    hw_scores[1] = value;
}

void GradeCalculator::on_horizontalSlider_3_valueChanged(int value)
{
    ui->spinBox_3->setValue(value);
    hw_scores[2] = value;
}

void GradeCalculator::on_horizontalSlider_4_valueChanged(int value)
{
    ui->spinBox_4->setValue(value);
    hw_scores[3] = value;
}

void GradeCalculator::on_horizontalSlider_5_valueChanged(int value)
{
    ui->spinBox_5->setValue(value);
    hw_scores[4] = value;
}
