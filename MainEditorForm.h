/* 
 * File:   MainEditorForm.h
 * Author: maciej
 *
 * Created on 22 lipiec 2014, 18:59
 */

#ifndef _MAINEDITORFORM_H
#define	_MAINEDITORFORM_H

#include "ui_MainEditorForm.h"

class MainEditorForm : public QMainWindow {
    Q_OBJECT
public:
    MainEditorForm();
    virtual ~MainEditorForm();
private:
    Ui::MainEditorForm widget;
    
    private slots:
        void onFileOpen();
        void onMessageBox();
};

#endif	/* _MAINEDITORFORM_H */
