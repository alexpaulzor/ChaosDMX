
#include <QApplication>
#include <QMessageBox>
#include <QStringList>
#include <QDebug>
#include <QDir>

#include "chaosdmx.h"

void ChaosDMX::init()
{
}

ChaosDMX::~ChaosDMX()
{
}

QString ChaosDMX::name()
{
    return QString("Chaos DMX");
}

QStringList ChaosDMX::inputs()
{
    QStringList list;


    return list;
}

/*****************************************************************************
 * Inputs
 *****************************************************************************/

void ChaosDMX::open(quint32 input)
{
}

void ChaosDMX::close(quint32 input)
{
}

QString ChaosDMX::infoText(quint32 input)
{
}

/*****************************************************************************
 * Configuration
 *****************************************************************************/

void ChaosDMX::configure()
{
    ConfigureChaosDMX conf(NULL, this);
    conf.exec();
}

bool ChaosDMX::canConfigure()
{
    return true;
}

/*****************************************************************************
 * Feedback
 *****************************************************************************/

void ChaosDMX::feedBack(quint32 input, quint32 channel, uchar value)
{
    Q_UNUSED(input);
    Q_UNUSED(channel);
    Q_UNUSED(value);
}


Q_EXPORT_PLUGIN2(chaosdmx, ChaosDMX)
