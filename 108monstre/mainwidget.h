#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#define PI 3.14159265359
#define RAD 0.0174532925

#include <QWidget>
#include <cmath>

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
private slots:
    void drawgraph();
};

#endif // MAINWIDGET_H
