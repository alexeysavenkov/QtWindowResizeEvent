#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QMainWindow>
#include <QResizeEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    QSize size = event->size();

    ui->label->setText(QString::number(size.width()) + " x " + QString::number(size.height()));

    QMainWindow::resizeEvent(event);
}
