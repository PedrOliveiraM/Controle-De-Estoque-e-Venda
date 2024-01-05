#ifndef TELASQLESTOQUE_H
#define TELASQLESTOQUE_H

#include <QDialog>

namespace Ui {
class TelaSQLestoque;
}

class TelaSQLestoque : public QDialog
{
    Q_OBJECT

public:
    explicit TelaSQLestoque(QWidget *parent = nullptr);
    ~TelaSQLestoque();

    QString tipoDeTela;

    QString getTipoDeTela() const;
    void setTipoDeTela(const QString &newTipoDeTela);

private:
    Ui::TelaSQLestoque *ui;
};

#endif // TELASQLESTOQUE_H
