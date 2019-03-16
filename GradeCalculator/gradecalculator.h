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
    void update_overall();

private:
    Ui::GradeCalculator *ui;
    std::array<double, 8> scores;
    double overall;
};

#endif // GRADECALCULATOR_H
