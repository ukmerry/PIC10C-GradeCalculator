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

    QObject::connect(ui->horiSlider_10B_1,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_1, SLOT(setValue(int)));
    QObject::connect(ui->horiSlider_10B_2,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_2, SLOT(setValue(int)));
    QObject::connect(ui->horiSlider_10B_3,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_3, SLOT(setValue(int)));
    QObject::connect(ui->horiSlider_10B_4,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_4, SLOT(setValue(int)));
    QObject::connect(ui->horiSlider_10B_5,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_5, SLOT(setValue(int)));
    QObject::connect(ui->horiSlider_10B_6,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_6, SLOT(setValue(int)));
    QObject::connect(ui->horiSlider_10B_7,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_7, SLOT(setValue(int)));
    QObject::connect(ui->horiSlider_10B_8,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_8, SLOT(setValue(int)));
    QObject::connect(ui->horiSlider_10B_midterm1,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_midterm1, SLOT(setValue(int)));
    QObject::connect(ui->horiSlider_10B_midterm2,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_midterm2, SLOT(setValue(int)));
    QObject::connect(ui->horiSlider_10B_final,SIGNAL(valueChanged(int)),
                         ui->spinBox_10B_final, SLOT(setValue(int)));

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

    if(ui->comboBox->currentIndex() == 0)
    {
        double hw_ratio = 0.15;
        int hw_number = 5;
        hw_ratio = (hw_ratio/hw_number)*5; //calculate the partial ratio of each homework

        overall += hw_ratio*(ui->spinBox_1->value() +
                             ui->spinBox_2->value() +
                             ui->spinBox_3->value() +
                             ui->spinBox_4->value() +
                             ui->spinBox_5->value());

        if(ui->radioButton->isChecked())
        {
            overall += 0.25*ui->spinBox_midterm1->value();
            overall += 0.30*ui->spinBox_final->value();
            overall += 0.35*ui->spinBox_project->value();
        }
        else if(ui->radioButton_2->isChecked())
        {
            overall += 0.50*ui->spinBox_final->value();
            overall += 0.35*ui->spinBox_project->value();
        }
    }
    else if(ui->comboBox->currentIndex() == 1)
    {
        double hw_ratio = 0.25;
        int hw_number = 8;
        hw_ratio = (hw_ratio/hw_number)*5;

        overall += hw_ratio*(ui->spinBox_10B_1->value() +
                             ui->spinBox_10B_2->value() +
                             ui->spinBox_10B_3->value() +
                             ui->spinBox_10B_4->value() +
                             ui->spinBox_10B_5->value() +
                             ui->spinBox_10B_6->value() +
                             ui->spinBox_10B_7->value() +
                             ui->spinBox_10B_8->value());

        if(ui->radioButton->isChecked())
        {
            overall += 0.20*ui->spinBox_10B_midterm1->value();
            overall += 0.20*ui->spinBox_10B_midterm2->value();
            overall += 0.35*ui->spinBox_10B_final->value();
        }
        else if(ui->radioButton_2->isChecked())
        {
            if(ui->spinBox_10B_midterm1->value() > ui->spinBox_10B_midterm2->value())
                overall += 0.30*ui->spinBox_10B_midterm1->value();
            else
                overall += 0.30*ui->spinBox_10B_midterm2->value();

            overall += 0.45*ui->spinBox_10B_final->value();
        }
    }

    if(overall >= 60)
        ui->lcdNumber->setPalette(Qt::green);
    else
        ui->lcdNumber->setPalette(Qt::red);

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

void GradeCalculator::on_spinBox_10B_1_valueChanged(int arg1)
{
    ui->horiSlider_10B_1->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_10B_2_valueChanged(int arg1)
{
    ui->horiSlider_10B_2->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_10B_3_valueChanged(int arg1)
{
    ui->horiSlider_10B_3->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_10B_4_valueChanged(int arg1)
{
    ui->horiSlider_10B_4->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_10B_5_valueChanged(int arg1)
{
    ui->horiSlider_10B_5->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_10B_6_valueChanged(int arg1)
{
    ui->horiSlider_10B_6->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_10B_7_valueChanged(int arg1)
{
    ui->horiSlider_10B_7->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_10B_8_valueChanged(int arg1)
{
    ui->horiSlider_10B_8->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_10B_midterm1_valueChanged(int arg1)
{
    ui->horiSlider_10B_midterm1->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_10B_midterm2_valueChanged(int arg1)
{
    ui->horiSlider_10B_midterm2->setValue(arg1);
    update_overall();
}

void GradeCalculator::on_spinBox_10B_final_valueChanged(int arg1)
{
    ui->horiSlider_10B_final->setValue(arg1);
    update_overall();
}
