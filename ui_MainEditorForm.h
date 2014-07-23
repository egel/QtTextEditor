/********************************************************************************
** Form generated from reading UI file 'MainEditorForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINEDITORFORM_H
#define UI_MAINEDITORFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainEditorForm
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainEditorForm)
    {
        if (MainEditorForm->objectName().isEmpty())
            MainEditorForm->setObjectName(QString::fromUtf8("MainEditorForm"));
        MainEditorForm->resize(800, 600);
        actionOpen = new QAction(MainEditorForm);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainEditorForm);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(MainEditorForm);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionExit = new QAction(MainEditorForm);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainEditorForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        MainEditorForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainEditorForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainEditorForm->setMenuBar(menubar);
        statusbar = new QStatusBar(MainEditorForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainEditorForm->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainEditorForm);
        QObject::connect(actionExit, SIGNAL(triggered()), MainEditorForm, SLOT(close()));
        QObject::connect(actionOpen, SIGNAL(triggered()), MainEditorForm, SLOT(onFileOpen()));

        QMetaObject::connectSlotsByName(MainEditorForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainEditorForm)
    {
        MainEditorForm->setWindowTitle(QApplication::translate("MainEditorForm", "MainEditorForm", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainEditorForm", "Open...", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainEditorForm", "Save", 0, QApplication::UnicodeUTF8));
        actionSave_as->setText(QApplication::translate("MainEditorForm", "Save as", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainEditorForm", "Exit", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainEditorForm", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainEditorForm: public Ui_MainEditorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINEDITORFORM_H
