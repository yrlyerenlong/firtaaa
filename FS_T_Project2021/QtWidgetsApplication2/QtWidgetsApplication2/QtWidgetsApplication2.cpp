#include "QtWidgetsApplication2.h"

QtWidgetsApplication2::QtWidgetsApplication2(QWidget *parent):
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("�´���");  //�������ϰ�ť����ʾ�ı�����Ϊ���´��ڡ�
}











