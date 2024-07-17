/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_input;
    QLineEdit *inputlineEdit;
    QPushButton *enterButton;
    QSpacerItem *verticalSpacer;
    QTextBrowser *logText;
    QWidget *rightWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *moreWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_main;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *openOutputButton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *setInputButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *setOutputButton;
    QHBoxLayout *horizontalLayout_28;
    QPushButton *vpnButton;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *uaButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_output;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *outputType;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_6;
    QLineEdit *outputName;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pushButton_2;
    QWidget *page_input;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *inputType;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *fuzz;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *level;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_10;
    QLineEdit *time_Sleep;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_11;
    QLineEdit *timeOut;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_12;
    QLineEdit *count;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *inputMpushButton;
    QWidget *page;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_7;
    QLineEdit *iconURL;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_8;
    QLineEdit *icon_more;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *inputMpushButton_2;
    QWidget *page_2;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_15;
    QLineEdit *porxy;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_13;
    QLineEdit *url;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_14;
    QLineEdit *url_file;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *vpnType;
    QSpacerItem *verticalSpacer_8;
    QPushButton *pushButton_4;
    QWidget *page_5;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_16;
    QLineEdit *ua;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_17;
    QLineEdit *ua_more;
    QSpacerItem *verticalSpacer_9;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *restButton;
    QPushButton *quitButton;
    QWidget *statuWidget;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_31;
    QLabel *urlLabel;
    QSpacerItem *horizontalSpacer_14;
    QLabel *timeLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(950, 684);
        Widget->setMinimumSize(QSize(0, 0));
        Widget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_input = new QLabel(Widget);
        label_input->setObjectName(QString::fromUtf8("label_input"));
        label_input->setMinimumSize(QSize(40, 30));

        horizontalLayout->addWidget(label_input);

        inputlineEdit = new QLineEdit(Widget);
        inputlineEdit->setObjectName(QString::fromUtf8("inputlineEdit"));
        inputlineEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(inputlineEdit);

        enterButton = new QPushButton(Widget);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setMinimumSize(QSize(50, 30));

        horizontalLayout->addWidget(enterButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        logText = new QTextBrowser(Widget);
        logText->setObjectName(QString::fromUtf8("logText"));
        logText->setMinimumSize(QSize(600, 450));

        verticalLayout->addWidget(logText);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        rightWidget = new QWidget(Widget);
        rightWidget->setObjectName(QString::fromUtf8("rightWidget"));
        rightWidget->setMinimumSize(QSize(250, 0));
        verticalLayout_3 = new QVBoxLayout(rightWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        moreWidget = new QWidget(rightWidget);
        moreWidget->setObjectName(QString::fromUtf8("moreWidget"));
        moreWidget->setMinimumSize(QSize(250, 60));
        moreWidget->setMaximumSize(QSize(99999, 60));

        verticalLayout_3->addWidget(moreWidget);

        stackedWidget = new QStackedWidget(rightWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 400));
        page_main = new QWidget();
        page_main->setObjectName(QString::fromUtf8("page_main"));
        layoutWidget = new QWidget(page_main);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 261, 370));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        stopButton = new QPushButton(layoutWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setMinimumSize(QSize(116, 62));
        stopButton->setMaximumSize(QSize(116, 62));

        horizontalLayout_4->addWidget(stopButton);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        openOutputButton = new QPushButton(layoutWidget);
        openOutputButton->setObjectName(QString::fromUtf8("openOutputButton"));
        openOutputButton->setMinimumSize(QSize(116, 62));
        openOutputButton->setMaximumSize(QSize(116, 62));

        horizontalLayout_4->addWidget(openOutputButton);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        setInputButton = new QPushButton(layoutWidget);
        setInputButton->setObjectName(QString::fromUtf8("setInputButton"));
        setInputButton->setMinimumSize(QSize(116, 62));
        setInputButton->setMaximumSize(QSize(116, 62));

        horizontalLayout_6->addWidget(setInputButton);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        setOutputButton = new QPushButton(layoutWidget);
        setOutputButton->setObjectName(QString::fromUtf8("setOutputButton"));
        setOutputButton->setMinimumSize(QSize(116, 62));
        setOutputButton->setMaximumSize(QSize(116, 62));

        horizontalLayout_6->addWidget(setOutputButton);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        vpnButton = new QPushButton(layoutWidget);
        vpnButton->setObjectName(QString::fromUtf8("vpnButton"));
        vpnButton->setMinimumSize(QSize(116, 62));
        vpnButton->setMaximumSize(QSize(116, 62));

        horizontalLayout_28->addWidget(vpnButton);

        horizontalSpacer_17 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_17);

        uaButton = new QPushButton(layoutWidget);
        uaButton->setObjectName(QString::fromUtf8("uaButton"));
        uaButton->setMinimumSize(QSize(116, 62));
        uaButton->setMaximumSize(QSize(116, 62));

        horizontalLayout_28->addWidget(uaButton);


        verticalLayout_5->addLayout(horizontalLayout_28);

        verticalSpacer_3 = new QSpacerItem(20, 158, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        stackedWidget->addWidget(page_main);
        page_output = new QWidget();
        page_output->setObjectName(QString::fromUtf8("page_output"));
        layoutWidget1 = new QWidget(page_output);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(52, 42, 191, 342));
        verticalLayout_9 = new QVBoxLayout(layoutWidget1);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 30));

        horizontalLayout_12->addWidget(label_5);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        outputType = new QComboBox(layoutWidget1);
        outputType->addItem(QString());
        outputType->addItem(QString());
        outputType->setObjectName(QString::fromUtf8("outputType"));
        outputType->setMinimumSize(QSize(90, 30));
        outputType->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_12->addWidget(outputType);


        verticalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 30));

        horizontalLayout_13->addWidget(label_6);

        outputName = new QLineEdit(layoutWidget1);
        outputName->setObjectName(QString::fromUtf8("outputName"));

        horizontalLayout_13->addWidget(outputName);


        verticalLayout_9->addLayout(horizontalLayout_13);

        verticalSpacer_7 = new QSpacerItem(20, 228, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(60, 30));

        verticalLayout_9->addWidget(pushButton_2);

        stackedWidget->addWidget(page_output);
        page_input = new QWidget();
        page_input->setObjectName(QString::fromUtf8("page_input"));
        layoutWidget2 = new QWidget(page_input);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 21, 206, 346));
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));

        horizontalLayout_9->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        inputType = new QComboBox(layoutWidget2);
        inputType->addItem(QString());
        inputType->addItem(QString());
        inputType->setObjectName(QString::fromUtf8("inputType"));
        inputType->setMinimumSize(QSize(90, 30));
        inputType->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_9->addWidget(inputType);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));

        horizontalLayout_10->addWidget(label_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        fuzz = new QComboBox(layoutWidget2);
        fuzz->addItem(QString());
        fuzz->addItem(QString());
        fuzz->setObjectName(QString::fromUtf8("fuzz"));
        fuzz->setMinimumSize(QSize(90, 30));
        fuzz->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_10->addWidget(fuzz);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(0, 30));

        horizontalLayout_14->addWidget(label_9);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);

        level = new QComboBox(layoutWidget2);
        level->addItem(QString());
        level->addItem(QString());
        level->addItem(QString());
        level->setObjectName(QString::fromUtf8("level"));
        level->setMinimumSize(QSize(90, 30));
        level->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_14->addWidget(level);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(0, 30));

        horizontalLayout_17->addWidget(label_10);

        time_Sleep = new QLineEdit(layoutWidget2);
        time_Sleep->setObjectName(QString::fromUtf8("time_Sleep"));

        horizontalLayout_17->addWidget(time_Sleep);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(0, 30));

        horizontalLayout_18->addWidget(label_11);

        timeOut = new QLineEdit(layoutWidget2);
        timeOut->setObjectName(QString::fromUtf8("timeOut"));

        horizontalLayout_18->addWidget(timeOut);


        verticalLayout_7->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(0, 30));

        horizontalLayout_19->addWidget(label_12);

        count = new QLineEdit(layoutWidget2);
        count->setObjectName(QString::fromUtf8("count"));

        horizontalLayout_19->addWidget(count);


        verticalLayout_7->addLayout(horizontalLayout_19);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(60, 30));

        horizontalLayout_22->addWidget(pushButton);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_12);

        inputMpushButton = new QPushButton(layoutWidget2);
        inputMpushButton->setObjectName(QString::fromUtf8("inputMpushButton"));
        inputMpushButton->setMinimumSize(QSize(60, 30));

        horizontalLayout_22->addWidget(inputMpushButton);


        verticalLayout_7->addLayout(horizontalLayout_22);

        stackedWidget->addWidget(page_input);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget3 = new QWidget(page);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 21, 206, 364));
        verticalLayout_8 = new QVBoxLayout(layoutWidget3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 30));

        horizontalLayout_15->addWidget(label_7);

        iconURL = new QLineEdit(layoutWidget3);
        iconURL->setObjectName(QString::fromUtf8("iconURL"));
        iconURL->setMinimumSize(QSize(100, 0));
        iconURL->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_15->addWidget(iconURL);


        verticalLayout_8->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 30));

        horizontalLayout_16->addWidget(label_8);

        icon_more = new QLineEdit(layoutWidget3);
        icon_more->setObjectName(QString::fromUtf8("icon_more"));
        icon_more->setMinimumSize(QSize(100, 0));
        icon_more->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_16->addWidget(icon_more);


        verticalLayout_8->addLayout(horizontalLayout_16);

        verticalSpacer_6 = new QSpacerItem(20, 248, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        pushButton_3 = new QPushButton(layoutWidget3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(60, 30));

        horizontalLayout_23->addWidget(pushButton_3);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_13);

        inputMpushButton_2 = new QPushButton(layoutWidget3);
        inputMpushButton_2->setObjectName(QString::fromUtf8("inputMpushButton_2"));
        inputMpushButton_2->setMinimumSize(QSize(60, 30));

        horizontalLayout_23->addWidget(inputMpushButton_2);


        verticalLayout_8->addLayout(horizontalLayout_23);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        layoutWidget4 = new QWidget(page_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(50, 23, 184, 358));
        verticalLayout_10 = new QVBoxLayout(layoutWidget4);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_15 = new QLabel(layoutWidget4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(0, 30));

        horizontalLayout_24->addWidget(label_15);

        porxy = new QLineEdit(layoutWidget4);
        porxy->setObjectName(QString::fromUtf8("porxy"));
        porxy->setMinimumSize(QSize(100, 0));
        porxy->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_24->addWidget(porxy);


        verticalLayout_10->addLayout(horizontalLayout_24);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(0, 30));

        horizontalLayout_20->addWidget(label_13);

        url = new QLineEdit(layoutWidget4);
        url->setObjectName(QString::fromUtf8("url"));
        url->setMinimumSize(QSize(100, 0));
        url->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_20->addWidget(url);


        verticalLayout_10->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_14 = new QLabel(layoutWidget4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(0, 30));

        horizontalLayout_21->addWidget(label_14);

        url_file = new QLineEdit(layoutWidget4);
        url_file->setObjectName(QString::fromUtf8("url_file"));
        url_file->setMinimumSize(QSize(100, 0));
        url_file->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_21->addWidget(url_file);


        verticalLayout_10->addLayout(horizontalLayout_21);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 30));

        horizontalLayout_11->addWidget(label_4);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        vpnType = new QComboBox(layoutWidget4);
        vpnType->addItem(QString());
        vpnType->addItem(QString());
        vpnType->addItem(QString());
        vpnType->setObjectName(QString::fromUtf8("vpnType"));
        vpnType->setMinimumSize(QSize(90, 30));
        vpnType->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_11->addWidget(vpnType);


        verticalLayout_10->addLayout(horizontalLayout_11);

        verticalSpacer_8 = new QSpacerItem(20, 168, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_8);

        pushButton_4 = new QPushButton(layoutWidget4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(60, 30));

        verticalLayout_10->addWidget(pushButton_4);

        stackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        layoutWidget5 = new QWidget(page_5);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(60, 20, 170, 340));
        verticalLayout_11 = new QVBoxLayout(layoutWidget5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(60, 60));
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_18);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_16 = new QLabel(layoutWidget5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(0, 30));

        horizontalLayout_25->addWidget(label_16);

        ua = new QLineEdit(layoutWidget5);
        ua->setObjectName(QString::fromUtf8("ua"));
        ua->setMinimumSize(QSize(100, 0));
        ua->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_25->addWidget(ua);


        verticalLayout_11->addLayout(horizontalLayout_25);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        label_17 = new QLabel(layoutWidget5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(0, 30));

        horizontalLayout_30->addWidget(label_17);

        ua_more = new QLineEdit(layoutWidget5);
        ua_more->setObjectName(QString::fromUtf8("ua_more"));
        ua_more->setMinimumSize(QSize(100, 0));
        ua_more->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_30->addWidget(ua_more);


        verticalLayout_11->addLayout(horizontalLayout_30);

        verticalSpacer_9 = new QSpacerItem(20, 208, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_9);

        pushButton_6 = new QPushButton(layoutWidget5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(60, 30));

        verticalLayout_11->addWidget(pushButton_6);

        stackedWidget->addWidget(page_5);

        verticalLayout_3->addWidget(stackedWidget);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        restButton = new QPushButton(rightWidget);
        restButton->setObjectName(QString::fromUtf8("restButton"));
        restButton->setMinimumSize(QSize(116, 62));
        restButton->setMaximumSize(QSize(116, 62));

        horizontalLayout_3->addWidget(restButton);

        quitButton = new QPushButton(rightWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setMinimumSize(QSize(116, 62));
        quitButton->setMaximumSize(QSize(116, 62));

        horizontalLayout_3->addWidget(quitButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_2->addWidget(rightWidget);


        verticalLayout_4->addLayout(horizontalLayout_2);

        statuWidget = new QWidget(Widget);
        statuWidget->setObjectName(QString::fromUtf8("statuWidget"));
        statuWidget->setMinimumSize(QSize(0, 30));
        layoutWidget6 = new QWidget(statuWidget);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(1, 0, 932, 32));
        horizontalLayout_31 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(0, 0, 0, 0);
        urlLabel = new QLabel(layoutWidget6);
        urlLabel->setObjectName(QString::fromUtf8("urlLabel"));
        urlLabel->setMinimumSize(QSize(200, 30));
        urlLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_31->addWidget(urlLabel);

        horizontalSpacer_14 = new QSpacerItem(518, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_14);

        timeLabel = new QLabel(layoutWidget6);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setMinimumSize(QSize(200, 30));
        timeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_31->addWidget(timeLabel);


        verticalLayout_4->addWidget(statuWidget);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_input->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        enterButton->setText(QCoreApplication::translate("Widget", "GO", nullptr));
        stopButton->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        openOutputButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\350\276\223\345\207\272", nullptr));
        setInputButton->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\351\205\215\347\275\256", nullptr));
        setOutputButton->setText(QCoreApplication::translate("Widget", "\350\276\223\345\207\272\351\205\215\347\275\256", nullptr));
        vpnButton->setText(QCoreApplication::translate("Widget", "\344\273\243\347\220\206\351\205\215\347\275\256", nullptr));
        uaButton->setText(QCoreApplication::translate("Widget", "\345\207\255\350\257\201\351\205\215\347\275\256", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\350\276\223\345\207\272\346\240\274\345\274\217\357\274\232", nullptr));
        outputType->setItemText(0, QCoreApplication::translate("Widget", "txt", nullptr));
        outputType->setItemText(1, QCoreApplication::translate("Widget", "json", nullptr));

        label_6->setText(QCoreApplication::translate("Widget", "\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\344\270\273\350\217\234\345\215\225", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\275\242\345\274\217\357\274\232", nullptr));
        inputType->setItemText(0, QCoreApplication::translate("Widget", "\346\226\207\346\234\254", nullptr));
        inputType->setItemText(1, QCoreApplication::translate("Widget", "base64", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\345\242\236\345\212\240\351\242\227\347\262\222\345\272\246\357\274\232", nullptr));
        fuzz->setItemText(0, QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
        fuzz->setItemText(1, QCoreApplication::translate("Widget", "\345\274\200\345\220\257", nullptr));

        label_9->setText(QCoreApplication::translate("Widget", "\347\210\254\345\217\226\347\255\211\347\272\247\357\274\232", nullptr));
        level->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        level->setItemText(1, QCoreApplication::translate("Widget", "2", nullptr));
        level->setItemText(2, QCoreApplication::translate("Widget", "3", nullptr));

        label_10->setText(QCoreApplication::translate("Widget", "\351\227\264\351\232\224\357\274\232", nullptr));
        time_Sleep->setText(QCoreApplication::translate("Widget", "3", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "\350\266\205\346\227\266\357\274\232", nullptr));
        timeOut->setText(QCoreApplication::translate("Widget", "180", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        count->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\344\270\273\350\217\234\345\215\225", nullptr));
        inputMpushButton->setText(QCoreApplication::translate("Widget", "\346\233\264\345\244\232", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "iconURL\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "iconFILE\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\344\270\273\350\217\234\345\215\225", nullptr));
        inputMpushButton_2->setText(QCoreApplication::translate("Widget", "\350\277\224\345\233\236", nullptr));
        label_15->setText(QCoreApplication::translate("Widget", "porxy\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "\344\273\243\347\220\206URL\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "\344\273\243\347\220\206FILE\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\344\273\243\347\220\206\347\261\273\345\236\213\357\274\232", nullptr));
        vpnType->setItemText(0, QCoreApplication::translate("Widget", "http", nullptr));
        vpnType->setItemText(1, QCoreApplication::translate("Widget", "socket4", nullptr));
        vpnType->setItemText(2, QCoreApplication::translate("Widget", "socket5", nullptr));

        pushButton_4->setText(QCoreApplication::translate("Widget", "\344\270\273\350\217\234\345\215\225", nullptr));
        label_18->setText(QCoreApplication::translate("Widget", "authorization\351\205\215\347\275\256", nullptr));
        label_16->setText(QCoreApplication::translate("Widget", "\346\214\207\345\256\232\357\274\232", nullptr));
        label_17->setText(QCoreApplication::translate("Widget", "\346\235\245\350\207\252\346\226\207\344\273\266\357\274\232", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "\344\270\273\350\217\234\345\215\225", nullptr));
        restButton->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\217\202\346\225\260", nullptr));
        quitButton->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        urlLabel->setText(QCoreApplication::translate("Widget", " github\357\274\232fdkang", nullptr));
        timeLabel->setText(QCoreApplication::translate("Widget", "2000\345\271\2641\346\234\2101\346\227\24500:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
