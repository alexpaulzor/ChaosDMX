
#ifndef CHAOSDMX_H
#define CHAOSDMX_H

#include <QEvent>
#include <QList>

#include "qlcinplugin.h"


/*****************************************************************************
 * HIDInput
 *****************************************************************************/

class ChaosDMX : public QLCInPlugin
{
    Q_OBJECT
    Q_INTERFACES(QLCInPlugin)

    /*********************************************************************
     * Initialization
     *********************************************************************/
public:
    /** @reimp */
    void init();

    /** @reimp */
    virtual ~ChaosDMX();

    /** @reimp */
    QString name();

    /*********************************************************************
     * Inputs
     *********************************************************************/
public:
    /** @reimp */
    void open(quint32 input = 0);

    /** @reimp */
    void close(quint32 input = 0);

    /** @reimp */
    QStringList inputs();

    /** @reimp */
    QString infoText(quint32 input = KInputInvalid);

signals:
    /** @reimp */
    void valueChanged(quint32 line, quint32 channel, uchar value);

protected:
    void customEvent(QEvent* event);

    /*********************************************************************
     * Configuration
     *********************************************************************/
public:
    /** @reimp */
    void configure();

    /** @reimp */
    bool canConfigure();

signals:
    /** @reimp */
    void configurationChanged();

    /*********************************************************************
     * Feedback
     *********************************************************************/
public:
    /** @reimp */
    void feedBack(quint32 input, quint32 channel, uchar value);

};

#endif
