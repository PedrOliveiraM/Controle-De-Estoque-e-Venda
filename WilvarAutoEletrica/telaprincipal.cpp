#include "telaprincipal.h"
#include "ui_telaprincipal.h"

TelaPrincipal::TelaPrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaPrincipal)
{
    ui->setupUi(this);
}

TelaPrincipal::~TelaPrincipal()
{
    delete ui;
    delete TelaEstoque;
}


void TelaPrincipal::on_pushButton_area_estoque_clicked()
{
    TelaEstoque = new TelaDeEstoque(this);
    TelaEstoque->exec();
}


void TelaPrincipal::on_pushButton_area_vendas_clicked()
{
    //TelaVendas = TelaDeVendas(this);
    //TelaVendas->exec();
}


void TelaPrincipal::on_pushButton_vender_clicked()
{

}

