#ifndef PARAM_H
#define PARAM_H
#include <QString>

typedef struct{
    //输入
    int inputType;// 文本/base64
    int fuzz;
    int level;
    int count;
    int time_Sleep;
    int timeOut;
    QString iconURL;
    QString icon_more;

    //输出
    QString outputName;
    int outputType;// text/json

    //代理
    int vpnType;// http/socket4/socket5
    QString url;
    QString url_file;
    QString porxy;

    //身份凭证
    QString ua;
    QString ua_more;

}CMD;
#endif // PARAM_H
