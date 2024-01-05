#include "teladeestoque.h"
#include "ui_teladeestoque.h"

TelaDeEstoque::TelaDeEstoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaDeEstoque)
{
    ui->setupUi(this);
}

TelaDeEstoque::~TelaDeEstoque()
{
    delete ui;
}

void TelaDeEstoque::on_pushButton_cadastrar_clicked()
{

}


void TelaDeEstoque::on_pushButton_alterar_clicked()
{

}


void TelaDeEstoque::on_pushButton_excluir_clicked()
{

}

