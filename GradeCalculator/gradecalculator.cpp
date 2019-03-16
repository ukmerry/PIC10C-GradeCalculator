#include "gradecalculator.h"
#include "ui_gradecalculator.h"

GradeCalculator::GradeCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GradeCalculator)
{
    ui->setupUi(this);
    ui->lcdNumber->setDigitCount(4);
    ui->lcdNumber->setPalette(Qt::red);
    ui->stackedWidget->setCurrentIndex(0);

    QObject::connect(ui->comboBox, SIGNAL(currentIndexChanged(int)),
                         ui->stackedWidget, SLOT(setCurrentIndex(int)));

    QObject::connect(ui->horizontalSlider_1,SIGNAL(valueChanged(int)),
                         ui->spinBox_1, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_2,SIGNAL(valueChanged(int)),
                         ui->spinBox_2, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_3,SIGNAL(valueChanged(int)),
                         ui->spinBox_3, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_4,SIGNAL(valueChanged(int)),
                         ui->spinBox_4, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_5,SIGNAL(valueChanged(int)),
                         ui->spinBox_5, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_midterm1,SIGNAL(valueChanged(int)),
                         ui->spinBox_midterm1, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_final,SIGNAL(valueChanged(int)),
                         ui->spinBox_final, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_project,SIGNAL(valueChanged(int)),
                         ui->spinBox_project, SLOT(setValue(int)));


    QObject::connect(ui->radioButton, SIGNAL(clicked()),
                         this, SLOT(update_overall()));
    QObject::connect(ui->radioButton_2, SIGNAL(clicked()),
                         this, SLOT(update_overall()));

}

GradeCalculator::~GradeCalculator()
{
    delete ui;
}

void GradeCalculator::update_overall()
{
    ui->lcdNumber->display(compute_overall());
    return;
}

double GradeCalculator::compute_overall()
{
    double overall = 0.0;

    if(ui->radioButton->isChecked())
    {
        overall += 0.15*(ui->spinBox_1->value() +
                        ui->spinBox_2->value() +
                        ui->spinBox_3->value() +
                        ui->spinBox_4->value() +
                        ui->spinBox_5->value());

        overall += 0.25*ui->spinBox_midterm1->value();
        overall += 0.30*ui->spinBox_final->value();
        overall += 0.35*ui->spinBox_project->value();
    }
    else if(ui->radioButton_2->isChecked())
    {
        overall += 0.15*(ui->spinBox_1->value() +
                        ui->spinBox_2->value() +
                        ui->spinBox_3->value() +
                        ui->spinBox_4->value() +
                        ui->spinBox_5->value());

        overall += 0.50*ui->spinBox_final->value();
        overall += 0.35*ui->spinBox_project->value();
    }

    return overall;
}

void GradeCalculator::on_spinBox_1_valueChanged(int arg1)
{
    ui->horizontalSlider_1->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_2_valueChanged(int arg1)
{
    ui->horizontalSlider_2->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_3_valueChanged(int arg1)
{
    ui->horizontalSlider_3->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_4_valueChanged(int arg1)
{
    ui->horizontalSlider_4->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_5_valueChanged(int arg1)
{
    ui->horizontalSlider_5->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_midterm1_valueChanged(int arg1)
{
    ui->horizontalSlider_midterm1->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_final_valueChanged(int arg1)
{
    ui->horizontalSlider_final->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_project_valueChanged(int arg1)
{
    ui->horizontalSlider_project->setValue(arg1);
    update_overall();
}
