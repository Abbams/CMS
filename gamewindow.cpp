#include "gamewindow.h"
#include "ui_gamewindow.h"

gamewindow::gamewindow(QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
}

gamewindow::~gamewindow()
{
    delete ui;
}