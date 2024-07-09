#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this); // 设置UI

    // 连接信号和槽
    connect(ui->loginButton, &QPushButton::clicked, this, &Widget::on_loginButton_clicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &Widget::on_cancelButton_clicked);
}

Widget::~Widget()
{
    delete ui; // 清理UI
}

// 槽函数，处理登录按钮点击事件
void Widget::on_loginButton_clicked()
{
    QString account = ui->accountLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (account == "WZ" && password == "1234") {
        showDashboard(); // 显示车载中控系统界面
    } else {
        ui->statusLabel->setText("Account or password error"); // 显示错误信息
    }
}

// 槽函数，处理取消按钮点击事件
void Widget::on_cancelButton_clicked()
{
    QApplication::quit(); // 退出应用程序
}

// 函数，用于显示车载中控系统界面
void Widget::showDashboard()
{
    QMessageBox::information(this, "Login Successful", "Welcome to Neusoft VCCS!"); // 显示欢迎信息
    // 此处可以添加显示车载中控系统界面的代码
}
