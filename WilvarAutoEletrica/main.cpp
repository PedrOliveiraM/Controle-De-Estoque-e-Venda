#include "telaprincipal.h"
#include <QSqlDatabase>
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    // Use QSqlDatabase instead of SqlDatabase
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

    bancoDeDados.setConnectOptions();

    QString dir = qApp->applicationDirPath();
    QString banco = dir + "\BancoDeDados\DataBase";

    bancoDeDados.setDatabaseName(banco);
    if (!bancoDeDados.open()){
        qDebug() << "O BANCO DE DADOS NÃO FOI ABERTO!";
    } else {
        qDebug() << "O BANCO DE DADOS FOI ABERTO!";
    }

    QApplication a(argc, argv);
    TelaPrincipal w;
    w.show();
    return a.exec();
}
