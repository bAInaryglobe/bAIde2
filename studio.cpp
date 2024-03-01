#include "studio.h"
#include "./ui_studio.h"

Studio::Studio(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Studio)
{
    ui->setupUi(this);
}

Studio::~Studio()
{
    delete ui;
}
