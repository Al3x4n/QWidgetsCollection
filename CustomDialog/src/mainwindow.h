#pragma once

#include <QtWidgets/QWidget>
#include "ui_mainwindow.h"

class MainWindow : public QWidget
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR); 

protected: 
    virtual void mouseMoveEvent(QMouseEvent *e) override;
    virtual void mousePressEvent(QMouseEvent *e) override;
    virtual void mouseReleaseEvent(QMouseEvent *) override;

private slots:
	void onCloseClicked(bool checked = false); 
	void onMinimizeClicked(bool checked = false);

private:
	Ui::mainwindow ui;
	QPoint mMousePoint;
	bool mMousePressed;
	bool mIsMax;
	QRect mLocation;
};
