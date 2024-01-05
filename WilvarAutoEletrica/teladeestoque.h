#ifndef TELADEESTOQUE_H
#define TELADEESTOQUE_H

#include <QDialog>

namespace Ui {
class TelaDeEstoque;
}

class TelaDeEstoque : public QDialog
{
    Q_OBJECT

public:
    explicit TelaDeEstoque(QWidget *parent = nullptr);
    ~TelaDeEstoque();

private slots:
    void on_pushButton_cadastrar_clicked();

    void on_pushButton_alterar_clicked();

    void on_pushButton_excluir_clicked();

private:
    Ui::TelaDeEstoque *ui;
};

#endif // TELADEESTOQUE_H
