/********************************************************************************
** Form generated from reading UI file 'telaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipal
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_area_estoque;
    QPushButton *pushButton_area_vendas;
    QPushButton *pushButton_vender;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName("TelaPrincipal");
        TelaPrincipal->resize(400, 600);
        centralwidget = new QWidget(TelaPrincipal);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 70, 211, 60));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 200, 271, 191));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_area_estoque = new QPushButton(widget);
        pushButton_area_estoque->setObjectName("pushButton_area_estoque");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_area_estoque->sizePolicy().hasHeightForWidth());
        pushButton_area_estoque->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        pushButton_area_estoque->setFont(font);

        verticalLayout->addWidget(pushButton_area_estoque);

        pushButton_area_vendas = new QPushButton(widget);
        pushButton_area_vendas->setObjectName("pushButton_area_vendas");
        sizePolicy1.setHeightForWidth(pushButton_area_vendas->sizePolicy().hasHeightForWidth());
        pushButton_area_vendas->setSizePolicy(sizePolicy1);
        pushButton_area_vendas->setFont(font);

        verticalLayout->addWidget(pushButton_area_vendas);

        pushButton_vender = new QPushButton(widget);
        pushButton_vender->setObjectName("pushButton_vender");
        sizePolicy1.setHeightForWidth(pushButton_vender->sizePolicy().hasHeightForWidth());
        pushButton_vender->setSizePolicy(sizePolicy1);
        pushButton_vender->setFont(font);

        verticalLayout->addWidget(pushButton_vender);

        TelaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaPrincipal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 22));
        TelaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaPrincipal);
        statusbar->setObjectName("statusbar");
        TelaPrincipal->setStatusBar(statusbar);

        retranslateUi(TelaPrincipal);

        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipal)
    {
        TelaPrincipal->setWindowTitle(QCoreApplication::translate("TelaPrincipal", "TelaPrincipal", nullptr));
        label->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Wilvar Auto El\303\251trica</span></p></body></html>", nullptr));
        pushButton_area_estoque->setText(QCoreApplication::translate("TelaPrincipal", "\303\201rea de Estoque", nullptr));
        pushButton_area_vendas->setText(QCoreApplication::translate("TelaPrincipal", "\303\201rea de Vendas", nullptr));
        pushButton_vender->setText(QCoreApplication::translate("TelaPrincipal", "Vender", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
