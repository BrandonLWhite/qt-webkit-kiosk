#include <QTextStream>
#include "config.h"
#include "webpage.h"

WebPage::WebPage(QObject* parent): QWebPage(parent)
{
}

void WebPage::javaScriptConsoleMessage(const QString& message, int lineNumber, const QString& sourceID)
{
    QTextStream(stdout) << message << lineNumber << sourceID << endl;
}
