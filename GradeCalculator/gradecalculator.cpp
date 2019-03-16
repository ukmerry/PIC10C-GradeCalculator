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
    QObject::connect(ui->spinBox,SIGNAL(valueChanged(int)),
                         ui->horizontalSlider, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
                         ui->spinBox, SLOT(setValue(int)));

    QObject::connect(ui->spinBox_2,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_2,SIGNAL(valueChanged(int)),
                         ui->horizontalSlider_2, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_2,SIGNAL(valueChanged(int)),
                         ui->spinBox_2, SLOT(setValue(int)));

    QObject::connect(ui->spinBox_3,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_3,SIGNAL(valueChanged(int)),
                         ui->horizontalSlider_3, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_3,SIGNAL(valueChanged(int)),
                         ui->spinBox_3, SLOT(setValue(int)));

    QObject::connect(ui->spinBox_4,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_4,SIGNAL(valueChanged(int)),
                         ui->horizontalSlider_4, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_4,SIGNAL(valueChanged(int)),
                         ui->spinBox_4, SLOT(setValue(int)));

    QObject::connect(ui->spinBox_5,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_5,SIGNAL(valueChanged(int)),
                         ui->horizontalSlider_5, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_5,SIGNAL(valueChanged(int)),
                         ui->spinBox_5, SLOT(setValue(int)));

    QObject::connect(ui->spinBox_6,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_6,SIGNAL(valueChanged(int)),
                         ui->horizontalSlider_6, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_6,SIGNAL(valueChanged(int)),
                         ui->spinBox_6, SLOT(setValue(int)));

    QObject::connect(ui->spinBox_7,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_7,SIGNAL(valueChanged(int)),
                         ui->horizontalSlider_7, SLOT(setValue(int)));
    QObject::connect(ui->horizontalSlider_7,SIGNAL(valueChanged(int)),
                         ui->spinBox_7, SLOT(setValue(int)));

    QObject::connect(ui->spinBox_8,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall()));
    QObject::connect(ui->spinBox_8,SIGNAL(valueChanged(int)),
                         ui->horizontalSlider_8, SLOT(setValue(int)));
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

