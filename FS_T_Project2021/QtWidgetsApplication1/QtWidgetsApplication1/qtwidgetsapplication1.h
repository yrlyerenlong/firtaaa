#pragma once

#include <QtWidgets/QWidget>
#include "ui_qtwidgetsapplication1.h"

class QtWidgetsApplication1 : public QWidget
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtWidgetsApplication1Class ui;
};
