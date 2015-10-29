#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "time_delta.h"
#include <QMessageBox>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->size().width(), this->size().height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if ((ui->lineEdit->text() =="" && ui->lineEdit_2->text() !="") ||
        (ui->lineEdit->text() !="" && ui->lineEdit_2->text() =="")) {
        QMessageBox::critical(this,"Input Error","Both Build and Revision must be supplied to convert.");
    } else if (ui->lineEdit->text() !="" && ui->lineEdit_2->text() !="") {
        // Convert to DateTime
        bool isIntBld;
        bool isIntRev;
        int build = ui->lineEdit->text().toInt(&isIntBld);
        int revision = ui->lineEdit_2->text().toInt(&isIntRev);

        if (!isIntBld || !isIntRev) {
            QMessageBox::critical(this,"Input Error","Both Build and Revision inputs must be integers.");
        } else {
            QDateTime date = QDateTime(QDate(2000, 1, 1)).addDays(build).addSecs(revision * 2);
            ui->lineEdit_3->setText(date.toString(Qt::SystemLocaleDate));
        }
    } else {
        // Generate Build.Revision
        QDateTime now = QDateTime::currentDateTime();
        QDateTime startTime = QDateTime(QDate(2000, 1, 1));

        TimeDelta span = TimeDelta(now - startTime);
        int build = span.InDays();
        int secs = (QTime(0,0,0).secsTo(QTime::currentTime())/2);

        ui->lineEdit->setText(QString::number(build));
        ui->lineEdit_2->setText(QString::number(secs));
        ui->lineEdit_4->setText(QString::number(build)+"."+QString::number(secs));
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
}
