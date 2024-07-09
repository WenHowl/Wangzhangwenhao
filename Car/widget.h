#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr); // 构造函数
    ~Widget(); // 析构函数

private slots:
    void on_loginButton_clicked(); // 槽函数，用于处理登录按钮点击事件
    void on_cancelButton_clicked(); // 槽函数，用于处理取消按钮点击事件

private:
    Ui::Widget *ui;
    void showDashboard(); // 函数，用于显示车载中控系统界面
};

#endif // WIDGET_H
