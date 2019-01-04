/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *LE_user;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *LE_Password;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *B_Login;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *B_Cancel;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *B_Cancel_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(912, 546);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setAutoFillBackground(true);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(196, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_7 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("MS UI Gothic"));
        font.setPointSize(48);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(85, 85, 255);"));

        verticalLayout_2->addWidget(label_3);

        verticalSpacer_2 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(102, 0));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        LE_user = new QLineEdit(Login);
        LE_user->setObjectName(QStringLiteral("LE_user"));

        horizontalLayout->addWidget(LE_user);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(102, 0));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        LE_Password = new QLineEdit(Login);
        LE_Password->setObjectName(QStringLiteral("LE_Password"));

        horizontalLayout_2->addWidget(LE_Password);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        B_Login = new QPushButton(Login);
        B_Login->setObjectName(QStringLiteral("B_Login"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(B_Login->sizePolicy().hasHeightForWidth());
        B_Login->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        B_Login->setFont(font2);
        B_Login->setStyleSheet(QLatin1String("image: url(:/Login/imageresource/login.png);\n"
"background-color: rgb(85, 85, 255);"));

        horizontalLayout_3->addWidget(B_Login);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        B_Cancel = new QPushButton(Login);
        B_Cancel->setObjectName(QStringLiteral("B_Cancel"));
        sizePolicy2.setHeightForWidth(B_Cancel->sizePolicy().hasHeightForWidth());
        B_Cancel->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(10);
        B_Cancel->setFont(font3);
        B_Cancel->setStyleSheet(QLatin1String("image: url(:/Login/imageresource/cancel.png);\n"
"background-color: rgb(255, 85, 127);"));

        horizontalLayout_3->addWidget(B_Cancel);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        B_Cancel_2 = new QPushButton(Login);
        B_Cancel_2->setObjectName(QStringLiteral("B_Cancel_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(B_Cancel_2->sizePolicy().hasHeightForWidth());
        B_Cancel_2->setSizePolicy(sizePolicy3);
        B_Cancel_2->setFont(font3);
        B_Cancel_2->setStyleSheet(QLatin1String("image: url(:/Login/imageresource/cancel.png);\n"
"background-color: rgb(200, 80, 59);"));

        horizontalLayout_4->addWidget(B_Cancel_2);

        horizontalSpacer = new QSpacerItem(136, 34, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_8->addLayout(verticalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(226, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 138, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_6->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        label_3->setText(QApplication::translate("Login", " Login", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "Uername", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "Password", Q_NULLPTR));
        B_Login->setText(QApplication::translate("Login", "Login", Q_NULLPTR));
        B_Cancel->setText(QApplication::translate("Login", "Cancel", Q_NULLPTR));
        B_Cancel_2->setText(QApplication::translate("Login", "Register", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
