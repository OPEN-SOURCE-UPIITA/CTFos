/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.19
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelTitleReg;
    QFormLayout *formLayoutReg;
    QLabel *labelNewUser;
    QLineEdit *lineEditNewUser;
    QLabel *labelNewPass;
    QLineEdit *lineEditNewPass;
    QHBoxLayout *horizontalLayoutReg;
    QPushButton *btnRegisterSubmit;
    QPushButton *btnBack;

    void setupUi(QWidget *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QString::fromUtf8("RegisterDialog"));
        RegisterDialog->resize(400, 250);
        verticalLayout = new QVBoxLayout(RegisterDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelTitleReg = new QLabel(RegisterDialog);
        labelTitleReg->setObjectName(QString::fromUtf8("labelTitleReg"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        labelTitleReg->setFont(font);
        labelTitleReg->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelTitleReg);

        formLayoutReg = new QFormLayout();
        formLayoutReg->setObjectName(QString::fromUtf8("formLayoutReg"));
        labelNewUser = new QLabel(RegisterDialog);
        labelNewUser->setObjectName(QString::fromUtf8("labelNewUser"));

        formLayoutReg->setWidget(0, QFormLayout::LabelRole, labelNewUser);

        lineEditNewUser = new QLineEdit(RegisterDialog);
        lineEditNewUser->setObjectName(QString::fromUtf8("lineEditNewUser"));

        formLayoutReg->setWidget(0, QFormLayout::FieldRole, lineEditNewUser);

        labelNewPass = new QLabel(RegisterDialog);
        labelNewPass->setObjectName(QString::fromUtf8("labelNewPass"));

        formLayoutReg->setWidget(1, QFormLayout::LabelRole, labelNewPass);

        lineEditNewPass = new QLineEdit(RegisterDialog);
        lineEditNewPass->setObjectName(QString::fromUtf8("lineEditNewPass"));
        lineEditNewPass->setEchoMode(QLineEdit::EchoMode::Password);

        formLayoutReg->setWidget(1, QFormLayout::FieldRole, lineEditNewPass);


        verticalLayout->addLayout(formLayoutReg);

        horizontalLayoutReg = new QHBoxLayout();
        horizontalLayoutReg->setObjectName(QString::fromUtf8("horizontalLayoutReg"));
        btnRegisterSubmit = new QPushButton(RegisterDialog);
        btnRegisterSubmit->setObjectName(QString::fromUtf8("btnRegisterSubmit"));

        horizontalLayoutReg->addWidget(btnRegisterSubmit);

        btnBack = new QPushButton(RegisterDialog);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));

        horizontalLayoutReg->addWidget(btnBack);


        verticalLayout->addLayout(horizontalLayoutReg);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QWidget *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Registro de Nuevo Operador", nullptr));
        labelTitleReg->setText(QCoreApplication::translate("RegisterDialog", "Nuevo Registro", nullptr));
        labelNewUser->setText(QCoreApplication::translate("RegisterDialog", "Nuevo Usuario:", nullptr));
        labelNewPass->setText(QCoreApplication::translate("RegisterDialog", "Contrase\303\261a:", nullptr));
        btnRegisterSubmit->setText(QCoreApplication::translate("RegisterDialog", "Registrar", nullptr));
        btnBack->setText(QCoreApplication::translate("RegisterDialog", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
