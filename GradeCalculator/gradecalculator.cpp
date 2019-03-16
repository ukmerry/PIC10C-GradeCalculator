#include "gradecalculator.h"
#include "ui_gradecalculator.h"

GradeCalculator::GradeCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GradeCalculator), overall(0.0)
{
    ui->setupUi(this);
    ui->lcdNumber->setDigitCount(4);
    ui->lcdNumber->setPalette(Qt::red);

    QObject::connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
                         ui->spinBox, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_2,SIGNAL(valueChanged(int)),
                         ui->spinBox_2, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_3,SIGNAL(valueChanged(int)),
                         ui->spinBox_3, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_4,SIGNAL(valueChanged(int)),
                         ui->spinBox_4, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_5,SIGNAL(valueChanged(int)),
                         ui->spinBox_5, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_6,SIGNAL(valueChanged(int)),
                         ui->spinBox_6, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_7,SIGNAL(valueChanged(int)),
                         ui->spinBox_7, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_8,SIGNAL(valueChanged(int)),
                         ui->spinBox_8, SLOT(setValue(int)));
}

GradeCalculator::~GradeCalculator()
{
    delete ui;
}

void GradeCalculator::update_overall()
{
    ui->lcdNumber->display(overall);
    return;
}

void GradeCalculator::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
    scores[0] = arg1;
    update_overall();
}

void GradeCalculator::on_spinBox_2_valueChanged(int arg1)
{
    ui->horizontalSlider_2->setValue(arg1);
    scores[1] = arg1;
    update_overall();
}

void GradeCalculator::on_spinBox_3_valueChanged(int arg1)
{
    ui->horizontalSlider_3->setValue(arg1);
    scores[2] = arg1;
    update_overall();
}

void GradeCalculator::on_spinBox_4_valueChanged(int arg1)
{
    ui->horizontalSlider_4->setValue(arg1);
    scores[3] = arg1;
    update_overall();
}

void GradeCalculator::on_spinBox_5_valueChanged(int arg1)
{
    ui->horizontalSlider_5->setValue(arg1);
    scores[4] = arg1;
    update_overall();
}

void GradeCalculator::on_spinBox_6_valueChanged(int arg1)
{
    ui->horizontalSlider_6->setValue(arg1);
    scores[5] = arg1;
    update_overall();
}

void GradeCalculator::on_spinBox_7_valueChanged(int arg1)
{
    ui->horizontalSlider_7->setValue(arg1);
    scores[6] = arg1;
    update_overall();
}

void GradeCalculator::on_spinBox_8_valueChanged(int arg1)
{
    ui->horizontalSlider_8->setValue(arg1);
    scores[7] = arg1;
    update_overall();
}
