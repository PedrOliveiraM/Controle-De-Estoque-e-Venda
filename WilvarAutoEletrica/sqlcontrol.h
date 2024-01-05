#ifndef SQLCONTROL_H
#define SQLCONTROL_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class SQLcontrol
{
public:
    SQLcontrol();


    bool insertDataEstoque(const QString& produto, double preco, double lucro, int quantidade);
    bool updateDataEstoque(int id, const QString& produto, double preco, double lucro, int quantidade);
    bool deleteDataEstoque(int id);

    bool insertDataVendas(const QString& produto, double preco, double lucro, int quantidade, const QString& data, const QString& vendedor);
    bool updateDataVendas(int id, const QString& produto, double preco, double lucro, int quantidade, const QString& data, const QString& vendedor);
    bool deleteDataVendas(int id);

};

#endif // SQLCONTROL_H
