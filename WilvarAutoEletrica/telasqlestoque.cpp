#include "telasqlestoque.h"
#include "ui_telasqlestoque.h"

TelaSQLestoque::TelaSQLestoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaSQLestoque)
{
    ui->setupUi(this);
}

TelaSQLestoque::~TelaSQLestoque()
{
    delete ui;
}

QString TelaSQLestoque::getTipoDeTela() const
{
    return tipoDeTela;
}

void TelaSQLestoque::setTipoDeTela(const QString &newTipoDeTela)
{
    tipoDeTela = newTipoDeTela;
}

