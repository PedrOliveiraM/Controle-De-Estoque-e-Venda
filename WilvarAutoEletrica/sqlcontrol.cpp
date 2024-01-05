#include "sqlcontrol.h"

SQLcontrol::SQLcontrol()
{

}
bool SQLcontrol::insertDataEstoque(const QString& produto, double preco, double lucro, int quantidade)
{
    QSqlQuery query;
    query.prepare("INSERT INTO tb_estoque (produto, preco, lucro, quantidade) "
                  "VALUES (:produto, :preco, :lucro, :quantidade);");
    query.bindValue(":produto", produto);
    query.bindValue(":preco", preco);
    query.bindValue(":lucro", lucro);
    query.bindValue(":quantidade", quantidade);

    return query.exec();
}

bool SQLcontrol::updateDataEstoque(int id, const QString& produto, double preco, double lucro, int quantidade)
{
    QSqlQuery query;
    query.prepare("UPDATE tb_estoque SET produto = :produto, "
                  "preco = :preco, lucro = :lucro, quantidade = :quantidade "
                  "WHERE codigo = :codigo;");
    query.bindValue(":codigo", id);
    query.bindValue(":produto", produto);
    query.bindValue(":preco", preco);
    query.bindValue(":lucro", lucro);
    query.bindValue(":quantidade", quantidade);

    return query.exec();
}

bool SQLcontrol::deleteDataEstoque(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM tb_estoque WHERE codigo = :codigo;");
    query.bindValue(":codigo", id);

    return query.exec();
}


bool SQLcontrol::insertDataVendas(const QString& produto, double preco, double lucro, int quantidade, const QString& data, const QString& vendedor)
{
    QSqlQuery query;
    query.prepare("INSERT INTO tb_vendas (produto, preco, lucro, quantidade, data, vendedor) "
                  "VALUES (:produto, :preco, :lucro, :quantidade, :data, :vendedor);");
    query.bindValue(":produto", produto);
    query.bindValue(":preco", preco);
    query.bindValue(":lucro", lucro);
    query.bindValue(":quantidade", quantidade);
    query.bindValue(":data", data);
    query.bindValue(":vendedor", vendedor);

    return query.exec();
}

bool SQLcontrol::updateDataVendas(int id, const QString& produto, double preco, double lucro, int quantidade, const QString& data, const QString& vendedor)
{
    QSqlQuery query;
    query.prepare("UPDATE tb_vendas SET produto = :produto, "
                  "preco = :preco, lucro = :lucro, quantidade = :quantidade, "
                  "data = :data, vendedor = :vendedor WHERE codigo = :codigo;");
    query.bindValue(":codigo", id);
    query.bindValue(":produto", produto);
    query.bindValue(":preco", preco);
    query.bindValue(":lucro", lucro);
    query.bindValue(":quantidade", quantidade);
    query.bindValue(":data", data);
    query.bindValue(":vendedor", vendedor);

    return query.exec();
}

bool SQLcontrol::deleteDataVendas(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM tb_vendas WHERE codigo = :codigo;");
    query.bindValue(":codigo", id);

    return query.exec();
}
