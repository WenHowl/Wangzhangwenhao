/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLineEdit *accountLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QPushButton *cancelButton;
    QLabel *statusLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(400, 300);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(Widget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        accountLineEdit = new QLineEdit(Widget);
        accountLineEdit->setObjectName("accountLineEdit");

        verticalLayout->addWidget(accountLineEdit);

        passwordLineEdit = new QLineEdit(Widget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordLineEdit);

        loginButton = new QPushButton(Widget);
        loginButton->setObjectName("loginButton");

        verticalLayout->addWidget(loginButton);

        cancelButton = new QPushButton(Widget);
        cancelButton->setObjectName("cancelButton");

        verticalLayout->addWidget(cancelButton);

        statusLabel = new QLabel(Widget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(statusLabel);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Neusoft VCCS", nullptr));
        titleLabel->setText(QCoreApplication::translate("Widget", "Neusoft VCCS", nullptr));
        accountLineEdit->setPlaceholderText(QCoreApplication::translate("Widget", "Account", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("Widget", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("Widget", "Login", nullptr));
        cancelButton->setText(QCoreApplication::translate("Widget", "Cancel", nullptr));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
