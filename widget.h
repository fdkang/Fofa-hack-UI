#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QProcess>
#include <QTextCodec>
#include <QFile>
#include <QMouseEvent>
#include <QTimer>
#include <QTime>
#include <QDesktopServices>
#include "param.h"
#include <string.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void toSearch(const QString &dir,QStringList &cmdList);
    void initConnect();
    void setCMDlist();
    void setCMD();
    void initCMD();
private slots:
    void on_quitButton_clicked();

    void on_restButton_clicked();

    void on_enterButton_clicked();

    void handleStandardError();

    void handleStandardOutput();

    void on_stopButton_clicked();

    void on_openOutputButton_clicked();

    void handleProcessFinished(int exitCode, QProcess::ExitStatus exitStatus);

    void on_setInputButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_inputMpushButton_clicked();

    void on_pushButton_3_clicked();

    void on_inputMpushButton_2_clicked();

    void on_setOutputButton_clicked();


    void on_vpnButton_clicked();

    void on_uaButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_timeout();


private:
    Ui::Widget *ui;
    QProcess process;
    QTextCodec *codec;
    QString cmd;
    QString dir;
    bool isDragging;
    QPoint lastMousePosition;
    QTimer *timer;
    CMD* cmd1;
    QStringList* cmdList1;
protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
};
#endif // WIDGET_H
