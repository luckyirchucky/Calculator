#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int Sum(int num_1, int num_2);
    int Raznost(int num_1, int num_2);
    int Umnoj(int num_1, int num_2);
    int Del(int num_1, int num_2);
    int Stepen(int num_1, int num_2);
    int Ost_del(int num_1, int num_2);
    double Sqrt(double num_1);
    double Exp(double num_1);
    int Abs(int num_1);
    double Sin(double num_1);
    double Cos(double num_1);
    double Tan(double num_1);
    double Dr(double num_1);
    double Ln(double num_1);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_14_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
