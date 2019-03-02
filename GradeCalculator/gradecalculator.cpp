#include "gradecalculator.h"
#include "ui_gradecalculator.h"

GradeCalculator::GradeCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GradeCalculator), overall(0.0)
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
    ui->lcdNumber->display(overall);
    return;
}

void GradeCalculator::on_horizontalSlider_valueChanged(int value)
{
    overall -= scores[0];
    scores[0] = value*0.15;
    overall += scores[0];

    ui->spinBox->setValue(value);
}

void GradeCalculator::on_horizontalSlider_2_valueChanged(int value)
{
    overall -= scores[1];
    scores[1] = value*0.15;
    overall += scores[1];

    ui->spinBox_2->setValue(value);
}

void GradeCalculator::on_horizontalSlider_3_valueChanged(int value)
{
    overall -= scores[2];
    scores[2] = value*0.15;
    overall += scores[2];

    ui->spinBox_3->setValue(value);
}

void GradeCalculator::on_horizontalSlider_4_valueChanged(int value)
{
    overall -= scores[3];
    scores[3] = value*0.15;
    overall += scores[3];

    ui->spinBox_4->setValue(value);
}

void GradeCalculator::on_horizontalSlider_5_valueChanged(int value)
{
    overall -= scores[4];
    scores[4] = value*0.15;
    overall += scores[4];

    ui->spinBox_5->setValue(value);
}

void GradeCalculator::on_horizontalSlider_6_valueChanged(int value)
{
    overall -= scores[5];
    scores[5] = value*0.25;
    overall += scores[5];

    ui->spinBox_6->setValue(value);
}

void GradeCalculator::on_horizontalSlider_7_valueChanged(int value)
{
    overall -= scores[6];
    scores[6] = value*0.30;
    overall += scores[6];

    ui->spinBox_7->setValue(value);
}

void GradeCalculator::on_horizontalSlider_8_valueChanged(int value)
{
    overall -= scores[7];
    scores[7] = value*0.35;
    overall += scores[7];

    ui->spinBox_8->setValue(value);
}


void GradeCalculator::on_spinBox_valueChanged(int arg1)
{
    overall -= scores[0];
    scores[0] = arg1*0.15;
    overall += scores[0];

    ui->horizontalSlider->setValue(arg1);
}

void GradeCalculator::on_spinBox_2_valueChanged(int arg1)
{
    overall -= scores[1];
    scores[1] = arg1*0.15;
    overall += scores[1];

    ui->horizontalSlider_2->setValue(arg1);
}

void GradeCalculator::on_spinBox_3_valueChanged(int arg1)
{
    overall -= scores[2];
    scores[2] = arg1*0.15;
    overall += scores[2];

    ui->horizontalSlider_3->setValue(arg1);
}

void GradeCalculator::on_spinBox_4_valueChanged(int arg1)
{
    overall -= scores[3];
    scores[3] = arg1*0.15;
    overall += scores[3];

    ui->horizontalSlider_4->setValue(arg1);
}

void GradeCalculator::on_spinBox_5_valueChanged(int arg1)
{
    overall -= scores[4];
    scores[4] = arg1*0.15;
    overall += scores[4];

    ui->horizontalSlider_5->setValue(arg1);
}

void GradeCalculator::on_spinBox_6_valueChanged(int arg1)
{
    overall -= scores[5];
    scores[5] = arg1*0.25;
    overall += scores[5];

    ui->horizontalSlider_6->setValue(arg1);
}

void GradeCalculator::on_spinBox_7_valueChanged(int arg1)
{
    overall -= scores[6];
    scores[6] = arg1*0.30;
    overall += scores[6];

    ui->horizontalSlider_7->setValue(arg1);
}

void GradeCalculator::on_spinBox_8_valueChanged(int arg1)
{
    overall -= scores[7];
    scores[7] = arg1*0.35;
    overall += scores[7];

    ui->horizontalSlider_8->setValue(arg1);
}
