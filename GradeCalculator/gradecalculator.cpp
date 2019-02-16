#include "gradecalculator.h"
#include "ui_gradecalculator.h"

GradeCalculator::GradeCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GradeCalculator)
{
    ui->setupUi(this);
    ui->lcdNumber->setDigitCount(4);
    ui->lcdNumber->setPalette(Qt::red);

    QObject::connect(ui->spinBox,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_2,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_3,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_4,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_5,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_6,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_7,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_8,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
}

GradeCalculator::~GradeCalculator()
{
    delete ui;
}

void GradeCalculator::update_overall()
{
    double hw_result = ui->spinBox->value()+
                       ui->spinBox_2->value()+
                       ui->spinBox_3->value()+
                       ui->spinBox_4->value()+
                       ui->spinBox_5->value();

    double midterm_result = ui->spinBox_6->value();
    double final_result = ui->spinBox_7->value();
    double project_result = ui->spinBox_8->value();

    double result = hw_result*0.15+
                    midterm_result*0.25+
                    final_result*0.3+
                    project_result*0.35;

    ui->lcdNumber->display(result);
    return;
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

void GradeCalculator::on_horizontalSlider_6_valueChanged(int value)
{
    ui->spinBox_6->setValue(value);
}

void GradeCalculator::on_horizontalSlider_7_valueChanged(int value)
{
    ui->spinBox_7->setValue(value);
}

void GradeCalculator::on_horizontalSlider_8_valueChanged(int value)
{
    ui->spinBox_8->setValue(value);
}


void GradeCalculator::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
}

void GradeCalculator::on_spinBox_2_valueChanged(int arg1)
{
    ui->horizontalSlider_2->setValue(arg1);
}

void GradeCalculator::on_spinBox_3_valueChanged(int arg1)
{
    ui->horizontalSlider_3->setValue(arg1);
}

void GradeCalculator::on_spinBox_4_valueChanged(int arg1)
{
    ui->horizontalSlider_4->setValue(arg1);
}

void GradeCalculator::on_spinBox_5_valueChanged(int arg1)
{
    ui->horizontalSlider_5->setValue(arg1);
}

void GradeCalculator::on_spinBox_6_valueChanged(int arg1)
{
    ui->horizontalSlider_6->setValue(arg1);
}

void GradeCalculator::on_spinBox_7_valueChanged(int arg1)
{
    ui->horizontalSlider_7->setValue(arg1);
}

void GradeCalculator::on_spinBox_8_valueChanged(int arg1)
{
    ui->horizontalSlider_8->setValue(arg1);
}
