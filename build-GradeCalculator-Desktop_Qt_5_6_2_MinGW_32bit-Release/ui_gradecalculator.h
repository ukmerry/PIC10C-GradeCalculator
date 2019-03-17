/********************************************************************************
** Form generated from reading UI file 'gradecalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADECALCULATOR_H
#define UI_GRADECALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GradeCalculator
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_result;
    QLCDNumber *lcdNumber;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QSlider *horizontalSlider_midterm1;
    QSpinBox *spinBox_midterm1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QSlider *horizontalSlider_final;
    QSpinBox *spinBox_final;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QSlider *horizontalSlider_project;
    QSpinBox *spinBox_project;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider_1;
    QSpinBox *spinBox_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *horizontalSlider_3;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSlider *horizontalSlider_4;
    QSpinBox *spinBox_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSlider *horizontalSlider_5;
    QSpinBox *spinBox_5;
    QWidget *page_4;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_33;
    QVBoxLayout *verticalLayout_34;
    QLabel *label_33;
    QVBoxLayout *verticalLayout_35;
    QHBoxLayout *horizontalLayout_35;
    QSlider *horiSlider_10B_midterm1;
    QSpinBox *spinBox_10B_midterm1;
    QVBoxLayout *verticalLayout_36;
    QLabel *label_34;
    QVBoxLayout *verticalLayout_37;
    QHBoxLayout *horizontalLayout_36;
    QSlider *horiSlider_10B_midterm2;
    QSpinBox *spinBox_10B_midterm2;
    QVBoxLayout *verticalLayout_38;
    QLabel *label_35;
    QVBoxLayout *verticalLayout_39;
    QHBoxLayout *horizontalLayout_37;
    QSlider *horiSlider_10B_final;
    QSpinBox *spinBox_10B_final;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_40;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_36;
    QSlider *horiSlider_10B_1;
    QSpinBox *spinBox_10B_1;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_37;
    QSlider *horiSlider_10B_2;
    QSpinBox *spinBox_10B_2;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_38;
    QSlider *horiSlider_10B_3;
    QSpinBox *spinBox_10B_3;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_39;
    QSlider *horiSlider_10B_4;
    QSpinBox *spinBox_10B_4;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_40;
    QSlider *horiSlider_10B_5;
    QSpinBox *spinBox_10B_5;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_44;
    QSlider *horiSlider_10B_6;
    QSpinBox *spinBox_10B_6;
    QHBoxLayout *horizontalLayout_47;
    QLabel *label_45;
    QSlider *horiSlider_10B_7;
    QSpinBox *spinBox_10B_7;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_46;
    QSlider *horiSlider_10B_8;
    QSpinBox *spinBox_10B_8;
    QLabel *label_47;
    QComboBox *comboBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_9;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GradeCalculator)
    {
        if (GradeCalculator->objectName().isEmpty())
            GradeCalculator->setObjectName(QStringLiteral("GradeCalculator"));
        GradeCalculator->resize(688, 541);
        centralWidget = new QWidget(GradeCalculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(460, 430, 181, 41));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_result = new QLabel(layoutWidget);
        label_result->setObjectName(QStringLiteral("label_result"));

        horizontalLayout_6->addWidget(label_result);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setDigitCount(5);

        horizontalLayout_6->addWidget(lcdNumber);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 60, 671, 351));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        layoutWidget_2 = new QWidget(page_3);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(380, 30, 261, 271));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSlider_midterm1 = new QSlider(layoutWidget_2);
        horizontalSlider_midterm1->setObjectName(QStringLiteral("horizontalSlider_midterm1"));
        horizontalSlider_midterm1->setMaximum(100);
        horizontalSlider_midterm1->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_midterm1);


        verticalLayout_2->addLayout(horizontalLayout_7);

        spinBox_midterm1 = new QSpinBox(layoutWidget_2);
        spinBox_midterm1->setObjectName(QStringLiteral("spinBox_midterm1"));
        spinBox_midterm1->setMaximum(100);

        verticalLayout_2->addWidget(spinBox_midterm1);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSlider_final = new QSlider(layoutWidget_2);
        horizontalSlider_final->setObjectName(QStringLiteral("horizontalSlider_final"));
        horizontalSlider_final->setMaximum(100);
        horizontalSlider_final->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_final);


        verticalLayout_5->addLayout(horizontalLayout_8);

        spinBox_final = new QSpinBox(layoutWidget_2);
        spinBox_final->setObjectName(QStringLiteral("spinBox_final"));
        spinBox_final->setMaximum(100);

        verticalLayout_5->addWidget(spinBox_final);


        verticalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_6->addWidget(label_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSlider_project = new QSlider(layoutWidget_2);
        horizontalSlider_project->setObjectName(QStringLiteral("horizontalSlider_project"));
        horizontalSlider_project->setMaximum(100);
        horizontalSlider_project->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_project);


        verticalLayout_7->addLayout(horizontalLayout_9);

        spinBox_project = new QSpinBox(layoutWidget_2);
        spinBox_project->setObjectName(QStringLiteral("spinBox_project"));
        spinBox_project->setMaximum(100);

        verticalLayout_7->addWidget(spinBox_project);


        verticalLayout_6->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(verticalLayout_6);

        layoutWidget_3 = new QWidget(page_3);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 30, 321, 251));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider_1 = new QSlider(layoutWidget_3);
        horizontalSlider_1->setObjectName(QStringLiteral("horizontalSlider_1"));
        horizontalSlider_1->setMaximum(20);
        horizontalSlider_1->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_1);

        spinBox_1 = new QSpinBox(layoutWidget_3);
        spinBox_1->setObjectName(QStringLiteral("spinBox_1"));
        spinBox_1->setMaximum(20);

        horizontalLayout->addWidget(spinBox_1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSlider_2 = new QSlider(layoutWidget_3);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(20);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_2);

        spinBox_2 = new QSpinBox(layoutWidget_3);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMaximum(20);

        horizontalLayout_2->addWidget(spinBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSlider_3 = new QSlider(layoutWidget_3);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(20);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_3);

        spinBox_3 = new QSpinBox(layoutWidget_3);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMaximum(20);

        horizontalLayout_3->addWidget(spinBox_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSlider_4 = new QSlider(layoutWidget_3);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(20);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_4);

        spinBox_4 = new QSpinBox(layoutWidget_3);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMaximum(20);

        horizontalLayout_4->addWidget(spinBox_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSlider_5 = new QSlider(layoutWidget_3);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setMaximum(20);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_5);

        spinBox_5 = new QSpinBox(layoutWidget_3);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setMaximum(20);

        horizontalLayout_5->addWidget(spinBox_5);


        verticalLayout->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        layoutWidget_4 = new QWidget(page_4);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(380, 30, 261, 271));
        verticalLayout_33 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setContentsMargins(11, 11, 11, 11);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        label_33 = new QLabel(layoutWidget_4);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout_34->addWidget(label_33);

        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        horiSlider_10B_midterm1 = new QSlider(layoutWidget_4);
        horiSlider_10B_midterm1->setObjectName(QStringLiteral("horiSlider_10B_midterm1"));
        horiSlider_10B_midterm1->setMaximum(100);
        horiSlider_10B_midterm1->setOrientation(Qt::Horizontal);

        horizontalLayout_35->addWidget(horiSlider_10B_midterm1);


        verticalLayout_35->addLayout(horizontalLayout_35);

        spinBox_10B_midterm1 = new QSpinBox(layoutWidget_4);
        spinBox_10B_midterm1->setObjectName(QStringLiteral("spinBox_10B_midterm1"));
        spinBox_10B_midterm1->setMaximum(100);

        verticalLayout_35->addWidget(spinBox_10B_midterm1);


        verticalLayout_34->addLayout(verticalLayout_35);


        verticalLayout_33->addLayout(verticalLayout_34);

        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        label_34 = new QLabel(layoutWidget_4);
        label_34->setObjectName(QStringLiteral("label_34"));

        verticalLayout_36->addWidget(label_34);

        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        horiSlider_10B_midterm2 = new QSlider(layoutWidget_4);
        horiSlider_10B_midterm2->setObjectName(QStringLiteral("horiSlider_10B_midterm2"));
        horiSlider_10B_midterm2->setMaximum(100);
        horiSlider_10B_midterm2->setOrientation(Qt::Horizontal);

        horizontalLayout_36->addWidget(horiSlider_10B_midterm2);


        verticalLayout_37->addLayout(horizontalLayout_36);

        spinBox_10B_midterm2 = new QSpinBox(layoutWidget_4);
        spinBox_10B_midterm2->setObjectName(QStringLiteral("spinBox_10B_midterm2"));
        spinBox_10B_midterm2->setMaximum(100);

        verticalLayout_37->addWidget(spinBox_10B_midterm2);


        verticalLayout_36->addLayout(verticalLayout_37);


        verticalLayout_33->addLayout(verticalLayout_36);

        verticalLayout_38 = new QVBoxLayout();
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        label_35 = new QLabel(layoutWidget_4);
        label_35->setObjectName(QStringLiteral("label_35"));

        verticalLayout_38->addWidget(label_35);

        verticalLayout_39 = new QVBoxLayout();
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        horiSlider_10B_final = new QSlider(layoutWidget_4);
        horiSlider_10B_final->setObjectName(QStringLiteral("horiSlider_10B_final"));
        horiSlider_10B_final->setMaximum(100);
        horiSlider_10B_final->setOrientation(Qt::Horizontal);

        horizontalLayout_37->addWidget(horiSlider_10B_final);


        verticalLayout_39->addLayout(horizontalLayout_37);

        spinBox_10B_final = new QSpinBox(layoutWidget_4);
        spinBox_10B_final->setObjectName(QStringLiteral("spinBox_10B_final"));
        spinBox_10B_final->setMaximum(100);

        verticalLayout_39->addWidget(spinBox_10B_final);


        verticalLayout_38->addLayout(verticalLayout_39);


        verticalLayout_33->addLayout(verticalLayout_38);

        layoutWidget1 = new QWidget(page_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 321, 331));
        verticalLayout_40 = new QVBoxLayout(layoutWidget1);
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setContentsMargins(11, 11, 11, 11);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        verticalLayout_40->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        label_36 = new QLabel(layoutWidget1);
        label_36->setObjectName(QStringLiteral("label_36"));

        horizontalLayout_38->addWidget(label_36);

        horiSlider_10B_1 = new QSlider(layoutWidget1);
        horiSlider_10B_1->setObjectName(QStringLiteral("horiSlider_10B_1"));
        horiSlider_10B_1->setMaximum(20);
        horiSlider_10B_1->setOrientation(Qt::Horizontal);

        horizontalLayout_38->addWidget(horiSlider_10B_1);

        spinBox_10B_1 = new QSpinBox(layoutWidget1);
        spinBox_10B_1->setObjectName(QStringLiteral("spinBox_10B_1"));
        spinBox_10B_1->setMaximum(20);

        horizontalLayout_38->addWidget(spinBox_10B_1);


        verticalLayout_40->addLayout(horizontalLayout_38);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        label_37 = new QLabel(layoutWidget1);
        label_37->setObjectName(QStringLiteral("label_37"));

        horizontalLayout_39->addWidget(label_37);

        horiSlider_10B_2 = new QSlider(layoutWidget1);
        horiSlider_10B_2->setObjectName(QStringLiteral("horiSlider_10B_2"));
        horiSlider_10B_2->setMaximum(20);
        horiSlider_10B_2->setOrientation(Qt::Horizontal);

        horizontalLayout_39->addWidget(horiSlider_10B_2);

        spinBox_10B_2 = new QSpinBox(layoutWidget1);
        spinBox_10B_2->setObjectName(QStringLiteral("spinBox_10B_2"));
        spinBox_10B_2->setMaximum(20);

        horizontalLayout_39->addWidget(spinBox_10B_2);


        verticalLayout_40->addLayout(horizontalLayout_39);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        label_38 = new QLabel(layoutWidget1);
        label_38->setObjectName(QStringLiteral("label_38"));

        horizontalLayout_40->addWidget(label_38);

        horiSlider_10B_3 = new QSlider(layoutWidget1);
        horiSlider_10B_3->setObjectName(QStringLiteral("horiSlider_10B_3"));
        horiSlider_10B_3->setMaximum(20);
        horiSlider_10B_3->setOrientation(Qt::Horizontal);

        horizontalLayout_40->addWidget(horiSlider_10B_3);

        spinBox_10B_3 = new QSpinBox(layoutWidget1);
        spinBox_10B_3->setObjectName(QStringLiteral("spinBox_10B_3"));
        spinBox_10B_3->setMaximum(20);

        horizontalLayout_40->addWidget(spinBox_10B_3);


        verticalLayout_40->addLayout(horizontalLayout_40);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        label_39 = new QLabel(layoutWidget1);
        label_39->setObjectName(QStringLiteral("label_39"));

        horizontalLayout_41->addWidget(label_39);

        horiSlider_10B_4 = new QSlider(layoutWidget1);
        horiSlider_10B_4->setObjectName(QStringLiteral("horiSlider_10B_4"));
        horiSlider_10B_4->setMaximum(20);
        horiSlider_10B_4->setOrientation(Qt::Horizontal);

        horizontalLayout_41->addWidget(horiSlider_10B_4);

        spinBox_10B_4 = new QSpinBox(layoutWidget1);
        spinBox_10B_4->setObjectName(QStringLiteral("spinBox_10B_4"));
        spinBox_10B_4->setMaximum(20);

        horizontalLayout_41->addWidget(spinBox_10B_4);


        verticalLayout_40->addLayout(horizontalLayout_41);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        label_40 = new QLabel(layoutWidget1);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_42->addWidget(label_40);

        horiSlider_10B_5 = new QSlider(layoutWidget1);
        horiSlider_10B_5->setObjectName(QStringLiteral("horiSlider_10B_5"));
        horiSlider_10B_5->setMaximum(20);
        horiSlider_10B_5->setOrientation(Qt::Horizontal);

        horizontalLayout_42->addWidget(horiSlider_10B_5);

        spinBox_10B_5 = new QSpinBox(layoutWidget1);
        spinBox_10B_5->setObjectName(QStringLiteral("spinBox_10B_5"));
        spinBox_10B_5->setMaximum(20);

        horizontalLayout_42->addWidget(spinBox_10B_5);


        verticalLayout_40->addLayout(horizontalLayout_42);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        label_44 = new QLabel(layoutWidget1);
        label_44->setObjectName(QStringLiteral("label_44"));

        horizontalLayout_46->addWidget(label_44);

        horiSlider_10B_6 = new QSlider(layoutWidget1);
        horiSlider_10B_6->setObjectName(QStringLiteral("horiSlider_10B_6"));
        horiSlider_10B_6->setMaximum(20);
        horiSlider_10B_6->setOrientation(Qt::Horizontal);

        horizontalLayout_46->addWidget(horiSlider_10B_6);

        spinBox_10B_6 = new QSpinBox(layoutWidget1);
        spinBox_10B_6->setObjectName(QStringLiteral("spinBox_10B_6"));
        spinBox_10B_6->setMaximum(20);

        horizontalLayout_46->addWidget(spinBox_10B_6);


        verticalLayout_40->addLayout(horizontalLayout_46);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setSpacing(6);
        horizontalLayout_47->setObjectName(QStringLiteral("horizontalLayout_47"));
        label_45 = new QLabel(layoutWidget1);
        label_45->setObjectName(QStringLiteral("label_45"));

        horizontalLayout_47->addWidget(label_45);

        horiSlider_10B_7 = new QSlider(layoutWidget1);
        horiSlider_10B_7->setObjectName(QStringLiteral("horiSlider_10B_7"));
        horiSlider_10B_7->setMaximum(20);
        horiSlider_10B_7->setOrientation(Qt::Horizontal);

        horizontalLayout_47->addWidget(horiSlider_10B_7);

        spinBox_10B_7 = new QSpinBox(layoutWidget1);
        spinBox_10B_7->setObjectName(QStringLiteral("spinBox_10B_7"));
        spinBox_10B_7->setMaximum(20);

        horizontalLayout_47->addWidget(spinBox_10B_7);


        verticalLayout_40->addLayout(horizontalLayout_47);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setSpacing(6);
        horizontalLayout_48->setObjectName(QStringLiteral("horizontalLayout_48"));
        label_46 = new QLabel(layoutWidget1);
        label_46->setObjectName(QStringLiteral("label_46"));

        horizontalLayout_48->addWidget(label_46);

        horiSlider_10B_8 = new QSlider(layoutWidget1);
        horiSlider_10B_8->setObjectName(QStringLiteral("horiSlider_10B_8"));
        horiSlider_10B_8->setMaximum(20);
        horiSlider_10B_8->setOrientation(Qt::Horizontal);

        horizontalLayout_48->addWidget(horiSlider_10B_8);

        spinBox_10B_8 = new QSpinBox(layoutWidget1);
        spinBox_10B_8->setObjectName(QStringLiteral("spinBox_10B_8"));
        spinBox_10B_8->setMaximum(20);

        horizontalLayout_48->addWidget(spinBox_10B_8);


        verticalLayout_40->addLayout(horizontalLayout_48);

        stackedWidget->addWidget(page_4);
        label_47 = new QLabel(centralWidget);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(180, 39, 61, 21));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(240, 30, 311, 41));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(90, 430, 101, 51));
        verticalLayout_9 = new QVBoxLayout(layoutWidget2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        verticalLayout_9->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout_9->addWidget(radioButton_2);

        GradeCalculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GradeCalculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 688, 21));
        GradeCalculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GradeCalculator);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GradeCalculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GradeCalculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GradeCalculator->setStatusBar(statusBar);

        retranslateUi(GradeCalculator);

        stackedWidget->setCurrentIndex(1);
        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GradeCalculator);
    } // setupUi

    void retranslateUi(QMainWindow *GradeCalculator)
    {
        GradeCalculator->setWindowTitle(QApplication::translate("GradeCalculator", "GradeCalculator", 0));
        label_result->setText(QApplication::translate("GradeCalculator", "Overall Score", 0));
        label_6->setText(QApplication::translate("GradeCalculator", "Midterm 1", 0));
        label_7->setText(QApplication::translate("GradeCalculator", "Final Exam", 0));
        label_8->setText(QApplication::translate("GradeCalculator", "Project", 0));
        label->setText(QApplication::translate("GradeCalculator", "HW1", 0));
        label_2->setText(QApplication::translate("GradeCalculator", "HW2", 0));
        label_3->setText(QApplication::translate("GradeCalculator", "HW3", 0));
        label_4->setText(QApplication::translate("GradeCalculator", "HW4", 0));
        label_5->setText(QApplication::translate("GradeCalculator", "HW5", 0));
        label_33->setText(QApplication::translate("GradeCalculator", "Midterm 1", 0));
        label_34->setText(QApplication::translate("GradeCalculator", "Midterm 2", 0));
        label_35->setText(QApplication::translate("GradeCalculator", "Final Exam", 0));
        label_36->setText(QApplication::translate("GradeCalculator", "HW1", 0));
        label_37->setText(QApplication::translate("GradeCalculator", "HW2", 0));
        label_38->setText(QApplication::translate("GradeCalculator", "HW3", 0));
        label_39->setText(QApplication::translate("GradeCalculator", "HW4", 0));
        label_40->setText(QApplication::translate("GradeCalculator", "HW5", 0));
        label_44->setText(QApplication::translate("GradeCalculator", "HW6", 0));
        label_45->setText(QApplication::translate("GradeCalculator", "HW7", 0));
        label_46->setText(QApplication::translate("GradeCalculator", "HW8", 0));
        label_47->setText(QApplication::translate("GradeCalculator", "Course", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("GradeCalculator", "Pic 10C. Advanced Programming", 0)
         << QApplication::translate("GradeCalculator", "Pic 10B. Intermediate Programming", 0)
        );
        radioButton->setText(QApplication::translate("GradeCalculator", "Schema A", 0));
        radioButton_2->setText(QApplication::translate("GradeCalculator", "Schema B", 0));
    } // retranslateUi

};

namespace Ui {
    class GradeCalculator: public Ui_GradeCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADECALCULATOR_H
