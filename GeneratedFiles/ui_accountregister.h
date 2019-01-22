/********************************************************************************
** Form generated from reading UI file 'accountregister.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTREGISTER_H
#define UI_ACCOUNTREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountregister
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *LB_Account;
    QLineEdit *LE_UserAccount;
    QHBoxLayout *horizontalLayout_6;
    QLabel *LB_DePartMent;
    QLineEdit *LE_UserPassword;
    QHBoxLayout *horizontalLayout_4;
    QLabel *LB_PasswrodConfirm;
    QLineEdit *LE_PasswordConfirm;
    QHBoxLayout *horizontalLayout_5;
    QLabel *LB_Password;
    QLineEdit *LE_Deoartment;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_Register;
    QSpacerItem *horizontalSpacer;
    QPushButton *PB_Authori;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *PB_Close;

    void setupUi(QWidget *accountregister)
    {
        if (accountregister->objectName().isEmpty())
            accountregister->setObjectName(QStringLiteral("accountregister"));
        accountregister->resize(481, 272);
        gridLayout = new QGridLayout(accountregister);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        LB_Account = new QLabel(accountregister);
        LB_Account->setObjectName(QStringLiteral("LB_Account"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LB_Account->sizePolicy().hasHeightForWidth());
        LB_Account->setSizePolicy(sizePolicy);
        LB_Account->setBaseSize(QSize(30, 40));
        LB_Account->setStyleSheet(QStringLiteral("image: url(:/Login/imageresource/Account.png);"));
        LB_Account->setScaledContents(false);
        LB_Account->setWordWrap(false);

        horizontalLayout_3->addWidget(LB_Account);

        LE_UserAccount = new QLineEdit(accountregister);
        LE_UserAccount->setObjectName(QStringLiteral("LE_UserAccount"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LE_UserAccount->sizePolicy().hasHeightForWidth());
        LE_UserAccount->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(LE_UserAccount);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        LB_DePartMent = new QLabel(accountregister);
        LB_DePartMent->setObjectName(QStringLiteral("LB_DePartMent"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LB_DePartMent->sizePolicy().hasHeightForWidth());
        LB_DePartMent->setSizePolicy(sizePolicy2);
        LB_DePartMent->setBaseSize(QSize(30, 40));
        LB_DePartMent->setStyleSheet(QStringLiteral("image: url(:/Login/imageresource/Password.png);image-size:100px"));

        horizontalLayout_6->addWidget(LB_DePartMent);

        LE_UserPassword = new QLineEdit(accountregister);
        LE_UserPassword->setObjectName(QStringLiteral("LE_UserPassword"));
        sizePolicy1.setHeightForWidth(LE_UserPassword->sizePolicy().hasHeightForWidth());
        LE_UserPassword->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(LE_UserPassword);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        LB_PasswrodConfirm = new QLabel(accountregister);
        LB_PasswrodConfirm->setObjectName(QStringLiteral("LB_PasswrodConfirm"));
        sizePolicy2.setHeightForWidth(LB_PasswrodConfirm->sizePolicy().hasHeightForWidth());
        LB_PasswrodConfirm->setSizePolicy(sizePolicy2);
        LB_PasswrodConfirm->setBaseSize(QSize(30, 40));
        LB_PasswrodConfirm->setStyleSheet(QStringLiteral("image: url(:/Login/imageresource/passwordconfirmation.png);image-size:100px"));

        horizontalLayout_4->addWidget(LB_PasswrodConfirm);

        LE_PasswordConfirm = new QLineEdit(accountregister);
        LE_PasswordConfirm->setObjectName(QStringLiteral("LE_PasswordConfirm"));
        sizePolicy1.setHeightForWidth(LE_PasswordConfirm->sizePolicy().hasHeightForWidth());
        LE_PasswordConfirm->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(LE_PasswordConfirm);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        LB_Password = new QLabel(accountregister);
        LB_Password->setObjectName(QStringLiteral("LB_Password"));
        sizePolicy2.setHeightForWidth(LB_Password->sizePolicy().hasHeightForWidth());
        LB_Password->setSizePolicy(sizePolicy2);
        LB_Password->setBaseSize(QSize(30, 40));
        LB_Password->setStyleSheet(QStringLiteral("image: url(:/Login/imageresource/DepartMent.png);image-size:100px"));

        horizontalLayout_5->addWidget(LB_Password);

        LE_Deoartment = new QLineEdit(accountregister);
        LE_Deoartment->setObjectName(QStringLiteral("LE_Deoartment"));
        sizePolicy1.setHeightForWidth(LE_Deoartment->sizePolicy().hasHeightForWidth());
        LE_Deoartment->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(LE_Deoartment);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        PB_Register = new QPushButton(accountregister);
        PB_Register->setObjectName(QStringLiteral("PB_Register"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(PB_Register->sizePolicy().hasHeightForWidth());
        PB_Register->setSizePolicy(sizePolicy3);
        PB_Register->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 127);"));

        horizontalLayout->addWidget(PB_Register);

        horizontalSpacer = new QSpacerItem(178, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        PB_Authori = new QPushButton(accountregister);
        PB_Authori->setObjectName(QStringLiteral("PB_Authori"));
        sizePolicy3.setHeightForWidth(PB_Authori->sizePolicy().hasHeightForWidth());
        PB_Authori->setSizePolicy(sizePolicy3);
        PB_Authori->setStyleSheet(QStringLiteral("background-color: rgb(27, 117, 200);"));

        horizontalLayout->addWidget(PB_Authori);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(268, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        PB_Close = new QPushButton(accountregister);
        PB_Close->setObjectName(QStringLiteral("PB_Close"));
        PB_Close->setStyleSheet(QLatin1String("border-color: rgb(85, 170, 255);\n"
"background-color: rgb(239, 234, 255);"));

        horizontalLayout_2->addWidget(PB_Close);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(accountregister);

        QMetaObject::connectSlotsByName(accountregister);
    } // setupUi

    void retranslateUi(QWidget *accountregister)
    {
        accountregister->setWindowTitle(QApplication::translate("accountregister", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LB_Account->setToolTip(QApplication::translate("accountregister", "<html><head/><body><p><span style=\" font-weight:600;\">UserAccount</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        LB_Account->setWhatsThis(QApplication::translate("accountregister", "<html><head/><body><p><span style=\" font-weight:600;\">UserAccount</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        LB_Account->setText(QString());
#ifndef QT_NO_TOOLTIP
        LB_DePartMent->setToolTip(QApplication::translate("accountregister", "<html><head/><body><p><span style=\" font-weight:600;\">Password</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        LB_DePartMent->setWhatsThis(QApplication::translate("accountregister", "<html><head/><body><p><span style=\" font-weight:600;\">Password</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        LB_DePartMent->setText(QString());
#ifndef QT_NO_TOOLTIP
        LB_PasswrodConfirm->setToolTip(QApplication::translate("accountregister", "<html><head/><body><p><span style=\" font-weight:600;\">the Password Confrimation</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        LB_PasswrodConfirm->setWhatsThis(QApplication::translate("accountregister", "<html><head/><body><p><span style=\" font-weight:600;\"> the Password confirmation</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        LB_PasswrodConfirm->setText(QString());
#ifndef QT_NO_TOOLTIP
        LB_Password->setToolTip(QApplication::translate("accountregister", "<html><head/><body><p><span style=\" font-weight:600;\">DepartMent</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        LB_Password->setWhatsThis(QApplication::translate("accountregister", "<html><head/><body><p><span style=\" font-weight:600;\">DePartMent</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        LB_Password->setText(QString());
        PB_Register->setText(QApplication::translate("accountregister", "Register", Q_NULLPTR));
        PB_Authori->setText(QApplication::translate("accountregister", "Account authorization", Q_NULLPTR));
        PB_Close->setText(QApplication::translate("accountregister", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class accountregister: public Ui_accountregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTREGISTER_H
