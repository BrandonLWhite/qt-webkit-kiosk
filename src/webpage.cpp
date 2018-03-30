#include <QTextStream>
#include "config.h"
#include "webpage.h"

WebPage::WebPage(QObject* parent): QWebPage(parent)
{
}

void WebPage::javaScriptConsoleMessage(const QString& message, int lineNumber, const QString& sourceID)
{
    // TODO BW: Need a better format.
    // TODO BW: Need to make this optional via a condition.  But don't check every time.
    //          Instead, use a bool flag and a setter.
    QTextStream(stdout) << message << lineNumber << sourceID << endl;
}
