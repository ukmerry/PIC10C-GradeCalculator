#ifndef GRADECALCULATOR_H
#define GRADECALCULATOR_H

#include <QMainWindow>
#include <array>

namespace Ui {
class GradeCalculator;
}

class GradeCalculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit GradeCalculator(QWidget *parent = nullptr);
    ~GradeCalculator();

    double compute_overall();

public slots:
    void update_overall();

private slots:
    void on_spinBox_1_valueChanged(int arg1);
    void on_spinBox_2_valueChanged(int arg1);
    void on_spinBox_3_valueChanged(int arg1);
    void on_spinBox_4_valueChanged(int arg1);
    void on_spinBox_5_valueChanged(int arg1);
    void on_spinBox_midterm1_valueChanged(int arg1);
    void on_spinBox_final_valueChanged(int arg1);
    void on_spinBox_project_valueChanged(int arg1);

private:
    Ui::GradeCalculator *ui;
};

#endif // GRADECALCULATOR_H
