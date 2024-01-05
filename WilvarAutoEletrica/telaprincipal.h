#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H
#include <QMainWindow>

//telas
#include <teladeestoque.h>

QT_BEGIN_NAMESPACE
namespace Ui { class TelaPrincipal; }
QT_END_NAMESPACE

class TelaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    TelaPrincipal(QWidget *parent = nullptr);
    ~TelaPrincipal();

private slots:
    void on_pushButton_area_estoque_clicked();

    void on_pushButton_area_vendas_clicked();

    void on_pushButton_vender_clicked();

private:
    Ui::TelaPrincipal *ui;
    TelaDeEstoque *TelaEstoque;
};
#endif // TELAPRINCIPAL_H
