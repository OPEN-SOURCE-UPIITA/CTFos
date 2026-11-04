/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.19
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QFormLayout *formLayout;
    QLabel *labelUser;
    QLineEdit *lineEditUser;
    QLabel *labelPass;
    QLineEdit *lineEditPass;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnLogin;
    QPushButton *btnGoToRegister;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(400, 300);
        LoginWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelTitle = new QLabel(centralwidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        labelTitle->setFont(font);
        labelTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelUser = new QLabel(centralwidget);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelUser);

        lineEditUser = new QLineEdit(centralwidget);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditUser);

        labelPass = new QLabel(centralwidget);
        labelPass->setObjectName(QString::fromUtf8("labelPass"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPass);

        lineEditPass = new QLineEdit(centralwidget);
        lineEditPass->setObjectName(QString::fromUtf8("lineEditPass"));
        lineEditPass->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPass);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));

        horizontalLayout->addWidget(btnLogin);

        btnGoToRegister = new QPushButton(centralwidget);
        btnGoToRegister->setObjectName(QString::fromUtf8("btnGoToRegister"));

        horizontalLayout->addWidget(btnGoToRegister);


        verticalLayout->addLayout(horizontalLayout);

        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "CTF Login - Acceso al Sistema", nullptr));
        labelTitle->setText(QCoreApplication::translate("LoginWindow", "CTF", nullptr));
        labelUser->setText(QCoreApplication::translate("LoginWindow", "Usuario:", nullptr));
        labelPass->setText(QCoreApplication::translate("LoginWindow", "Contrase\303\261a:", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginWindow", "Iniciar Sesi\303\263n", nullptr));
        btnGoToRegister->setText(QCoreApplication::translate("LoginWindow", "Registrarse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
