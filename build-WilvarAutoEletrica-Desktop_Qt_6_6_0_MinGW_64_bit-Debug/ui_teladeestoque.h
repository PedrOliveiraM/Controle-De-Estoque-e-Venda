/********************************************************************************
** Form generated from reading UI file 'teladeestoque.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELADEESTOQUE_H
#define UI_TELADEESTOQUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaDeEstoque
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_cadastrar;
    QPushButton *pushButton_alterar;
    QPushButton *pushButton_excluir;
    QLineEdit *lineEdit_barra_de_pesquisa;

    void setupUi(QDialog *TelaDeEstoque)
    {
        if (TelaDeEstoque->objectName().isEmpty())
            TelaDeEstoque->setObjectName("TelaDeEstoque");
        TelaDeEstoque->resize(1280, 720);
        label = new QLabel(TelaDeEstoque);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 30, 751, 131));
        QFont font;
        font.setPointSize(72);
        font.setBold(true);
        label->setFont(font);
        listWidget = new QListWidget(TelaDeEstoque);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(150, 260, 981, 421));
        widget = new QWidget(TelaDeEstoque);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(310, 200, 671, 42));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_cadastrar = new QPushButton(widget);
        pushButton_cadastrar->setObjectName("pushButton_cadastrar");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_cadastrar->sizePolicy().hasHeightForWidth());
        pushButton_cadastrar->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton_cadastrar->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_cadastrar->setIcon(icon);
        pushButton_cadastrar->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_cadastrar);

        pushButton_alterar = new QPushButton(widget);
        pushButton_alterar->setObjectName("pushButton_alterar");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_alterar->sizePolicy().hasHeightForWidth());
        pushButton_alterar->setSizePolicy(sizePolicy1);
        pushButton_alterar->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/editar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_alterar->setIcon(icon1);
        pushButton_alterar->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_alterar);

        pushButton_excluir = new QPushButton(widget);
        pushButton_excluir->setObjectName("pushButton_excluir");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_excluir->sizePolicy().hasHeightForWidth());
        pushButton_excluir->setSizePolicy(sizePolicy2);
        pushButton_excluir->setFont(font1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagens/excluir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_excluir->setIcon(icon2);
        pushButton_excluir->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_excluir);

        lineEdit_barra_de_pesquisa = new QLineEdit(widget);
        lineEdit_barra_de_pesquisa->setObjectName("lineEdit_barra_de_pesquisa");
        sizePolicy1.setHeightForWidth(lineEdit_barra_de_pesquisa->sizePolicy().hasHeightForWidth());
        lineEdit_barra_de_pesquisa->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lineEdit_barra_de_pesquisa);


        retranslateUi(TelaDeEstoque);

        QMetaObject::connectSlotsByName(TelaDeEstoque);
    } // setupUi

    void retranslateUi(QDialog *TelaDeEstoque)
    {
        TelaDeEstoque->setWindowTitle(QCoreApplication::translate("TelaDeEstoque", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TelaDeEstoque", "\303\201rea de Estoque", nullptr));
        pushButton_cadastrar->setText(QCoreApplication::translate("TelaDeEstoque", "Cadastrar", nullptr));
        pushButton_alterar->setText(QCoreApplication::translate("TelaDeEstoque", "Alterar", nullptr));
        pushButton_excluir->setText(QCoreApplication::translate("TelaDeEstoque", "Excluir", nullptr));
        lineEdit_barra_de_pesquisa->setInputMask(QCoreApplication::translate("TelaDeEstoque", "pesquisa", nullptr));
        lineEdit_barra_de_pesquisa->setText(QCoreApplication::translate("TelaDeEstoque", "pesquisa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaDeEstoque: public Ui_TelaDeEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELADEESTOQUE_H
