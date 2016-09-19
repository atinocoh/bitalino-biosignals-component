/********************************************************************************
** Form generated from reading UI file 'dialogomac.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOMAC_H
#define UI_DIALOGOMAC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogoMac
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *mac;
    QLabel *label;

    void setupUi(QDialog *DialogoMac)
    {
        if (DialogoMac->objectName().isEmpty())
            DialogoMac->setObjectName(QString::fromUtf8("DialogoMac"));
        DialogoMac->resize(394, 155);
        buttonBox = new QDialogButtonBox(DialogoMac);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        mac = new QPlainTextEdit(DialogoMac);
        mac->setObjectName(QString::fromUtf8("mac"));
        mac->setGeometry(QRect(20, 50, 341, 31));
        label = new QLabel(DialogoMac);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 341, 17));

        retranslateUi(DialogoMac);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogoMac, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogoMac, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogoMac);
    } // setupUi

    void retranslateUi(QDialog *DialogoMac)
    {
        DialogoMac->setWindowTitle(QApplication::translate("DialogoMac", "A\303\261adir direcci\303\263n MAC", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogoMac", "Introduce la MAC del dispositivo:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogoMac: public Ui_DialogoMac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOMAC_H
