#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    QObject::connect(ui->btn_draw, SIGNAL(clicked()), this, SLOT(drawgraph()));
}

void MainWidget::drawgraph()
{
    double a = ui->spb_a->value();
    double nmax = ui->spb_nmax->value();
    QVector <double> x(4000), y(4000);

    for (double i = 0; i < 4000; i++)
    {
        x[i] = (i - 2000) / 1000;
        y[i] = 0;
        for (int k = 0; k <= nmax; k++)
            y[i] += cos(pow(a, k) * PI * x[i]) / pow(2, k);
    }
    ui->plot->addGraph();
    ui->plot->graph(0)->setData(x, y);
    ui->plot->xAxis->setRange(-2.0, 2.0);
    ui->plot->yAxis->setRange(-2.0, 2.0);
    ui->plot->replot();
}

MainWidget::~MainWidget()
{
    delete ui;
}
