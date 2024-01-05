/********************************************************************************
** Form generated from reading UI file 'telasqlestoque.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELASQLESTOQUE_H
#define UI_TELASQLESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaSQLestoque
{
public:
    QLabel *label_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_preco;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_preco_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_lucro;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *spinBox_quantidade;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonAdicionar_Alterar;
    QPushButton *pushButton_Limpar;
    QPushButton *pushButton_Cancelar;

    void setupUi(QDialog *TelaSQLestoque)
    {
        if (TelaSQLestoque->objectName().isEmpty())
            TelaSQLestoque->setObjectName("TelaSQLestoque");
        TelaSQLestoque->resize(737, 578);
        label_5 = new QLabel(TelaSQLestoque);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 20, 581, 121));
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        label_5->setFont(font);
        widget = new QWidget(TelaSQLestoque);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 170, 381, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        lineEdit_preco = new QLineEdit(widget);
        lineEdit_preco->setObjectName("lineEdit_preco");

        horizontalLayout->addWidget(lineEdit_preco);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_preco_2 = new QLineEdit(widget);
        lineEdit_preco_2->setObjectName("lineEdit_preco_2");

        horizontalLayout_2->addWidget(lineEdit_preco_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_4->addWidget(label_2);

        lineEdit_lucro = new QLineEdit(widget);
        lineEdit_lucro->setObjectName("lineEdit_lucro");

        horizontalLayout_4->addWidget(lineEdit_lucro);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_5->addWidget(label_3);

        spinBox_quantidade = new QSpinBox(widget);
        spinBox_quantidade->setObjectName("spinBox_quantidade");

        horizontalLayout_5->addWidget(spinBox_quantidade);


        verticalLayout->addLayout(horizontalLayout_5);

        widget1 = new QWidget(TelaSQLestoque);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(170, 420, 391, 41));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButtonAdicionar_Alterar = new QPushButton(widget1);
        pushButtonAdicionar_Alterar->setObjectName("pushButtonAdicionar_Alterar");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonAdicionar_Alterar->sizePolicy().hasHeightForWidth());
        pushButtonAdicionar_Alterar->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButtonAdicionar_Alterar);

        pushButton_Limpar = new QPushButton(widget1);
        pushButton_Limpar->setObjectName("pushButton_Limpar");
        sizePolicy.setHeightForWidth(pushButton_Limpar->sizePolicy().hasHeightForWidth());
        pushButton_Limpar->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_Limpar);

        pushButton_Cancelar = new QPushButton(widget1);
        pushButton_Cancelar->setObjectName("pushButton_Cancelar");
        sizePolicy.setHeightForWidth(pushButton_Cancelar->sizePolicy().hasHeightForWidth());
        pushButton_Cancelar->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pushButton_Cancelar);


        retranslateUi(TelaSQLestoque);

        QMetaObject::connectSlotsByName(TelaSQLestoque);
    } // setupUi

    void retranslateUi(QDialog *TelaSQLestoque)
    {
        TelaSQLestoque->setWindowTitle(QCoreApplication::translate("TelaSQLestoque", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("TelaSQLestoque", "\303\201rea de Cadastro", nullptr));
        label_4->setText(QCoreApplication::translate("TelaSQLestoque", "Produto", nullptr));
        label->setText(QCoreApplication::translate("TelaSQLestoque", "Pre\303\247o", nullptr));
        label_2->setText(QCoreApplication::translate("TelaSQLestoque", "Lucro", nullptr));
        label_3->setText(QCoreApplication::translate("TelaSQLestoque", "Quantidade", nullptr));
        pushButtonAdicionar_Alterar->setText(QString());
        pushButton_Limpar->setText(QCoreApplication::translate("TelaSQLestoque", "Limpar", nullptr));
        pushButton_Cancelar->setText(QCoreApplication::translate("TelaSQLestoque", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaSQLestoque: public Ui_TelaSQLestoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELASQLESTOQUE_H
