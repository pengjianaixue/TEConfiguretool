/********************************************************************************
** Form generated from reading UI file 'authorizationform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATIONFORM_H
#define UI_AUTHORIZATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_AuthorizationForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *LE_Adminpassword;
    QComboBox *CB_AccountPre;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *PB_Submit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *PB_Cancel;

    void setupUi(QWidget *AuthorizationForm)
    {
        if (AuthorizationForm->objectName().isEmpty())
            AuthorizationForm->setObjectName(QStringLiteral("AuthorizationForm"));
        AuthorizationForm->resize(279, 113);
        gridLayout = new QGridLayout(AuthorizationForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(AuthorizationForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(AuthorizationForm);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        LE_Adminpassword = new QLineEdit(AuthorizationForm);
        LE_Adminpassword->setObjectName(QStringLiteral("LE_Adminpassword"));

        verticalLayout_4->addWidget(LE_Adminpassword);

        CB_AccountPre = new QComboBox(AuthorizationForm);
        CB_AccountPre->setObjectName(QStringLiteral("CB_AccountPre"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CB_AccountPre->sizePolicy().hasHeightForWidth());
        CB_AccountPre->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(CB_AccountPre);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        PB_Submit = new QPushButton(AuthorizationForm);
        PB_Submit->setObjectName(QStringLiteral("PB_Submit"));

        horizontalLayout_4->addWidget(PB_Submit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        PB_Cancel = new QPushButton(AuthorizationForm);
        PB_Cancel->setObjectName(QStringLiteral("PB_Cancel"));

        horizontalLayout_4->addWidget(PB_Cancel);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        retranslateUi(AuthorizationForm);

        QMetaObject::connectSlotsByName(AuthorizationForm);
    } // setupUi

    void retranslateUi(QWidget *AuthorizationForm)
    {
        AuthorizationForm->setWindowTitle(QApplication::translate("AuthorizationForm", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("AuthorizationForm", "AdminPassword", Q_NULLPTR));
        label_4->setText(QApplication::translate("AuthorizationForm", "AccountClass", Q_NULLPTR));
        PB_Submit->setText(QApplication::translate("AuthorizationForm", "OK", Q_NULLPTR));
        PB_Cancel->setText(QApplication::translate("AuthorizationForm", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AuthorizationForm: public Ui_AuthorizationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATIONFORM_H
