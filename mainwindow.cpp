#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QCoreApplication>
#include <QtCore/qmath.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Калькулятор");
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_PushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


int MainWindow::Sum(int num_1, int num_2){
    return num_1 + num_2;
}

int MainWindow::Raznost(int num_1, int num_2){
    return num_1 - num_2;
}

int MainWindow::Umnoj(int num_1, int num_2){
    return num_1 * num_2;
}

int MainWindow::Del(int num_1, int num_2){
    return num_1 / num_2;
}

int MainWindow::Stepen(int num_1, int num_2){
    return pow(num_1,num_2);
}

int MainWindow::Ost_del(int num_1, int num_2){
    return num_1 % num_2;
}

double MainWindow::Sqrt(double num_1){
    return sqrt(num_1);
}

double MainWindow::Exp(double num_1){
    return exp(num_1);
}

int MainWindow::Abs(int num_1){
    return abs(num_1);
}

double MainWindow::Sin(double num_1){
    return sin(num_1);
}

double MainWindow::Cos(double num_1){
    return cos(num_1);
}

double MainWindow::Tan(double num_1){
    return tan(num_1);
}

double MainWindow::Dr(double num_1){
    return 1/num_1;
}

double MainWindow::Ln(double num_1){
    return qLn(num_1);
}

void MainWindow::on_pushButton_clicked()
{
    int num_1 = ui->textEdit->toPlainText().toInt();
    int num_2 = ui->textEdit_2->toPlainText().toInt();
    int rezult = Sum(num_1, num_2);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_2_clicked()
{
    int num_1 = ui->textEdit->toPlainText().toInt();
    int num_2 = ui->textEdit_2->toPlainText().toInt();
    int rezult = Raznost(num_1, num_2);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_3_clicked()
{
    int num_1 = ui->textEdit->toPlainText().toInt();
    int num_2 = ui->textEdit_2->toPlainText().toInt();
    int rezult = Umnoj(num_1, num_2);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_6_clicked()
{
    int num_1 = ui->textEdit->toPlainText().toInt();
    int num_2 = ui->textEdit_2->toPlainText().toInt();
    int rezult = Stepen(num_1, num_2);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_4_clicked()
{
    int num_1 = ui->textEdit->toPlainText().toInt();
    int num_2 = ui->textEdit_2->toPlainText().toInt();
    if (num_2 != 0){
        int rezult = Del(num_1, num_2);
        QString str;
        str.setNum(rezult);
        ui->textEdit_3->setText(str);}
    else ui->textEdit_3->setText("На 0 делить нельзя!");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
    ui->textEdit_3->setText("");
}

void MainWindow::on_pushButton_5_clicked()
{
    int num_1 = ui->textEdit->toPlainText().toInt();
    int num_2 = ui->textEdit_2->toPlainText().toInt();
    if (num_2 != 0){
        int rezult = Ost_del(num_1, num_2);
        QString str;
        str.setNum(rezult);
        ui->textEdit_3->setText(str);}
    else ui->textEdit_3->setText("На 0 делить нельзя!");
}

void MainWindow::on_pushButton_9_clicked()
{
    double num_1 = ui->textEdit->toPlainText().toDouble();
    double rezult = Sqrt(num_1);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_8_clicked()
{
    double num_1 = ui->textEdit->toPlainText().toDouble();
    double rezult = Exp(num_1);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_10_clicked()
{
    int num_1 = ui->textEdit->toPlainText().toInt();
    int rezult = Abs(num_1);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_11_clicked()
{
    double num_1 = ui->textEdit->toPlainText().toDouble();
    double rezult = Sin(num_1);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_12_clicked()
{
    double num_1 = ui->textEdit->toPlainText().toDouble();
    double rezult = Cos(num_1);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_13_clicked()
{
    double num_1 = ui->textEdit->toPlainText().toDouble();
    double rezult = Tan(num_1);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_15_clicked()
{
    double num_1 = ui->textEdit->toPlainText().toDouble();
    double rezult = Dr(num_1);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}

void MainWindow::on_pushButton_14_clicked()
{
    double num_1 = ui->textEdit->toPlainText().toDouble();
    double rezult = Ln(num_1);
    QString str;
    str.setNum(rezult);
    ui->textEdit_3->setText(str);
}
