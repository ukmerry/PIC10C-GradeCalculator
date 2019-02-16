#ifndef GRADECALCULATOR_H
#define GRADECALCULATOR_H

#include <QMainWindow>

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

private:
    Ui::GradeCalculator *ui;
};

#endif // GRADECALCULATOR_H
