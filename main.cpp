/*
 * File:   main.cpp
 * Author: maciej
 *
 * Created on 22 lipiec 2014, 18:40
 */

#include <QtGui/QApplication>

#include "MainEditorForm.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    MainEditorForm frm;
    frm.show();

    return app.exec();
}
