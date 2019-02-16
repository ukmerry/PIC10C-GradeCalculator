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

signals:
    void compute_overall();

public slots:
    void update_overall(int);

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_4_valueChanged(int value);

    void on_horizontalSlider_5_valueChanged(int value);

private:
    Ui::GradeCalculator *ui;
    std::array<int, 5> hw_scores;
};

#endif // GRADECALCULATOR_H
