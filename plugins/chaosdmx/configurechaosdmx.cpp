
#include <QTreeWidgetItem>
#include <QTreeWidget>
#include <QHeaderView>
#include <QPushButton>
#include <QString>
#include <QTimer>
#include <QDebug>

#include "configurechaosdmx.h"
#include "chaosdmx.h"


/*****************************************************************************
 * Initialization
 *****************************************************************************/

ConfigureChaosDMX::ConfigureChaosDMX(QWidget* parent, ChaosDMX* plugin)
        : QDialog(parent)
{
    Q_ASSERT(plugin != NULL);
    m_plugin = plugin;

    /* Setup UI controls */
    setupUi(this);
}

ConfigureChaosDMX::~ConfigureChaosDMX()
{
}

/*****************************************************************************
 * Interface refresh
 *****************************************************************************/

void ConfigureChaosDMX::slotRefreshClicked()
{
    Q_ASSERT(m_plugin != NULL);
}

void ConfigureChaosDMX::refreshList()
{

}
