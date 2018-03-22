#ifndef WEBPAGE_H
#define WEBPAGE_H

#include <QObject>
#include <QWebPage>

class WebPage : public QWebPage
{
    Q_OBJECT

public:
    explicit WebPage(QObject* parent = 0);

protected:
    void javaScriptConsoleMessage(const QString& message, int lineNumber, const QString& sourceID);
};

#endif // WEBVIEW_H
