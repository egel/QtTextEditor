/*
 * File:   MainEditorForm.cpp
 * Author: maciej
 *
 * Created on 22 lipiec 2014, 18:59
 */

#include "MainEditorForm.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDialog>
#include <memory>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

using std::unique_ptr;

const static int MAX_SIZE = 500000;

MainEditorForm::MainEditorForm() {
    widget.setupUi(this);
}

MainEditorForm::~MainEditorForm() {
}

void MainEditorForm::onFileOpen()
{
    QString fileName=QFileDialog::getOpenFileName(this, "open file");
    if(fileName=="")
    {
        return;
    }
    
    int fd=::open(fileName.toStdString().c_str(),O_RDONLY);
    if(fd==-1)
    {
        QMessageBox::critical(this, "Error", "Can't open this file.");
        return;
    }
    struct stat st;
    stat(fileName.toStdString().c_str(), &st);
    if(st.st_size>MAX_SIZE)
    {
        QMessageBox::critical(this, "Error", "This file is to big for this Editor");
        return;
    }
    
    unique_ptr<char>fileBuffer(new char[st.st_size]);
    ::read(fd, fileBuffer.get(),st.st_size);
    ::close(fd);
    widget.plainTextEdit->setPlainText(fileBuffer.get());
}

void MainEditorForm::onMessageBox()
{
    QMessageBox msg;
    msg.setText("test 123");
    msg.setStandardButtons(QMessageBox::Save|QMessageBox::Cancel);
    int ret=msg.exec();
    switch(ret)
    {
        
    }
}