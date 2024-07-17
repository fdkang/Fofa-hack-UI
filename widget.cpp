#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , isDragging(false)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(950,610);

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
#endif
    dir = ".\\fofa.exe";
    timer = new QTimer(this);
    codec = QTextCodec::codecForName("GBK");
    ui->openOutputButton->setEnabled(false);
    ui->openOutputButton->setStyleSheet("background-color:#4c5359;");

    setWindowIcon(QIcon(":/icon/resource/icon/fofa.png"));
    cmd1 = new CMD;
    cmdList1 = new QStringList();

    initCMD();
    initConnect();

    ui->stackedWidget->setCurrentIndex(0);
    timer->start(1000);
}

Widget::~Widget()
{
    free(cmd1);
    free(cmdList1);
    delete ui;
}

void Widget::toSearch(const QString &dir, QStringList &cmdList)
{
    process.start(dir, cmdList);
    if (!process.waitForStarted()) {
        ui->logText->append("启动失败: " + process.errorString());
    }
}

void Widget::initConnect()
{
    connect(&process, &QProcess::readyReadStandardOutput, this, &Widget::handleStandardOutput);
    connect(&process, &QProcess::readyReadStandardError, this, &Widget::handleStandardError);
    connect(&process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished), this, &Widget::handleProcessFinished);
    connect(timer, &QTimer::timeout, this, &Widget::on_timeout);
}

void Widget::setCMDlist()
{
    cmdList1->clear();
    if(1 == cmd1->inputType){
        cmdList1->append("-b " + ui->inputlineEdit->text().trimmed());
    }else{
        cmdList1->append("-k " + ui->inputlineEdit->text().trimmed());
    }
    if(!cmd1->ua.isEmpty()){
        cmdList1->append("--authorization " + cmd1->ua);
    }
    if(!cmd1->url.isEmpty()){
        cmdList1->append("--proxy-url " + cmd1->url);
    }
    if(1 == cmd1->fuzz){
        cmdList1->append("-f");
    }
    if(0 < cmd1->count){
        cmdList1->append("-e " + QString::number(cmd1->count));
    }else{
        cmd1->count = 100;
        cmdList1->append("-e " + QString::number(cmd1->count));
    }
    if(1 < cmd1->level){
        cmdList1->append("-l " + QString::number(cmd1->level));
    }
    if(!cmd1->porxy.isEmpty()){
        cmdList1->append("--proxy " + cmd1->porxy);
    }
    if(!cmd1->iconURL.isEmpty()){
        cmdList1->append("--iconurl " + cmd1->iconURL);
    }
    if(0 < cmd1->timeOut){
        cmdList1->append("-to " + QString::number(cmd1->timeOut));
    }else{
        cmd1->timeOut = 180;
        cmdList1->append("-to " + QString::number(cmd1->timeOut));
    }
    if(!cmd1->ua_more.isEmpty()){
        cmdList1->append("--authorization-file " + cmd1->ua_more);
    }
    if(1 < cmd1->vpnType){
        if(1 == cmd1->vpnType){
            cmdList1->append("--proxy-type socks4");
        }else{
            cmdList1->append("--proxy-type socks5");
        }
    }
    if(!cmd1->url_file.isEmpty()){
        cmdList1->append("--proxy-file " + cmd1->url_file);
    }
    if(!cmd1->icon_more.isEmpty()){
        cmdList1->append("--iconfile " + cmd1->icon_more);
    }
    if(!cmd1->outputName.isEmpty()){
        cmdList1->append("-on " + cmd1->outputName);
    }
    if(0 != cmd1->outputType){
        cmdList1->append("-o json");
    }
    if(0 < cmd1->time_Sleep){
        cmdList1->append("-t " + QString::number(cmd1->time_Sleep));
    }else{
        cmd1->timeOut = 3;
        cmdList1->append("-t " + QString::number(cmd1->time_Sleep));
    }
    qDebug()<<*cmdList1;
}

void Widget::setCMD()
{
    cmd1->inputType = ui->inputType->currentIndex();
    cmd1->fuzz = ui->fuzz->currentIndex();
    cmd1->count = ui->count->text().toUInt();
    cmd1->level = ui->level->currentText().toUInt();
    cmd1->timeOut = ui->timeOut->text().toUInt();
    cmd1->vpnType = ui->vpnType->currentIndex();
    cmd1->outputType = ui->outputType->currentIndex();
    cmd1->time_Sleep = ui->time_Sleep->text().toUInt();
    if(NULL != ui->ua->text()){cmd1->ua = ui->ua->text();}
    if(NULL != ui->url->text()){cmd1->url = ui->url->text();}
    if(NULL != ui->porxy->text()){cmd1->porxy = ui->porxy->text();}
    if(NULL != ui->iconURL->text()){cmd1->iconURL = ui->iconURL->text();}
    if(NULL != ui->ua_more->text()){cmd1->ua_more = ui->ua_more->text();}
    if(NULL != ui->url_file->text()){cmd1->url_file = ui->url_file->text();}
    if(NULL != ui->icon_more->text()){cmd1->icon_more = ui->icon_more->text();}
    if(NULL != ui->outputName->text()){cmd1->outputName = ui->outputName->text();}
}

void Widget::initCMD()
{
    cmd1->level = 1;
    cmd1->timeOut = 180;
    cmd1->time_Sleep = 3;
    cmd1->count = 100;
    cmd1->fuzz = 0;
    cmd1->inputType = 0;
    cmd1->vpnType = 0;
    cmd1->outputType = 0;

    cmd1->iconURL = "";
    cmd1->icon_more = "";
    cmd1->outputName = "";
    cmd1->url = "";
    cmd1->url_file = "";
    cmd1->porxy = "";
    cmd1->ua = "";
    cmd1->ua_more = "";

    ui->level->setCurrentIndex(cmd1->level - 1);
    ui->timeOut->setText(QString::number(cmd1->timeOut));
    ui->time_Sleep->setText(QString::number(cmd1->time_Sleep));
    ui->count->setText(QString::number(cmd1->count));
    ui->fuzz->setCurrentIndex(cmd1->fuzz);
    ui->inputType->setCurrentIndex(cmd1->inputType);
    ui->vpnType->setCurrentIndex(cmd1->vpnType);
    ui->outputType->setCurrentIndex(cmd1->outputType);
    ui->iconURL->clear();
    ui->icon_more->clear();
    ui->porxy->clear();
    ui->url->clear();
    ui->url_file->clear();
    ui->ua->clear();
    ui->ua_more->clear();
    ui->outputName->clear();
}

void Widget::handleStandardOutput()
{
    QByteArray output = process.readAllStandardOutput();
    QString decodedOutput = codec->toUnicode(output);
    QStringList lines = decodedOutput.split("\r\n");
    for (const QString &line : lines) {
        if (!line.isEmpty()) {
            ui->logText->append(line);
        }
    }
}

void Widget::handleStandardError()
{
    QByteArray errorOutput = process.readAllStandardError();
    QString decodedErrorOutput = codec->toUnicode(errorOutput);
    ui->logText->append("Error Output: " + decodedErrorOutput);
}

void Widget::handleProcessFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
    Q_UNUSED(exitCode);
    Q_UNUSED(exitStatus);
    ui->openOutputButton->setEnabled(true);
    ui->openOutputButton->setStyleSheet("");
}

void Widget::on_quitButton_clicked()
{
    this->close();
}

void Widget::on_restButton_clicked()
{
    // 初始化参数
    process.kill();
    initCMD();
    ui->inputlineEdit->clear();
    ui->logText->clear();
    ui->logText->append("初始化完成");
}

void Widget::on_enterButton_clicked()
{
    process.kill();
    ui->logText->clear();
    setCMD();
    setCMDlist();
    toSearch(dir, *cmdList1);
}

// 鼠标按下事件
void Widget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        isDragging = true;
        lastMousePosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

// 鼠标移动事件
void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if (isDragging && (event->buttons() & Qt::LeftButton)) {
        move(event->globalPos() - lastMousePosition);
        event->accept();
    }
}

// 鼠标释放事件
void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        isDragging = false;
        event->accept();
    }
}

void Widget::on_stopButton_clicked()
{
    process.kill();
    ui->logText->clear();
    ui->logText->append("程序已停止");
}

void Widget::on_openOutputButton_clicked()
{
    process.start("notepad final_fofaHack.txt");
}

void Widget::on_setInputButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Widget::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_inputMpushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Widget::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_inputMpushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Widget::on_setOutputButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Widget::on_vpnButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void Widget::on_uaButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void Widget::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_timeout()
{
    ui->timeLabel->setText(QDateTime::currentDateTime().toString("yyyy年MM月dd日 hh:mm:ss"));
}


