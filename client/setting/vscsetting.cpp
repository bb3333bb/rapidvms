#include "vscsetting.h"
#include "vscvwidget.h"



extern Factory *gFactory;

VSCSetting::VSCSetting(QWidget *parent, VSCDeviceList &pDeviceList)
    : QWidget(parent), m_DeviceList(pDeviceList)
{
	ui.setupUi(this);
	SetupConnections();

	m_License = new VSCLicense();
	m_Version = new VSCVersion();
	m_User = new VSCUser();
	m_Language = new VSCLanguage();
	m_Layout = new QVBoxLayout();

	m_HdfsRecord = new VSCHdfsRecord();
	m_RtspRtp = new VSCRtspRtp();
	m_OAPI = new VSCOAPI();
	m_VideoSetting = new VSCVideoSetting();

	m_MiningSetting = new VSCMiningSetting();

	m_Layout->setMargin(0);

	ui.widget->setLayout(m_Layout);
}

VSCSetting::~VSCSetting()
{
	//TODO
	delete m_License;
	delete m_Version;
	delete m_Layout;
}

void VSCSetting::SetupConnections()
{
	connect(ui.treeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), 
		this,  SLOT(treeClicked(QTreeWidgetItem*, int)));
}


void VSCSetting::setupDefaultValue()
{
}

void VSCSetting::updateParamValue(QLineEdit *ld, s8 * pParam)
{
}

void VSCSetting::applyConfig()
{

}

void VSCSetting::mouseDoubleClickEvent(QMouseEvent *e)
{

}

void VSCSetting::createContentMenu()
{

}

void VSCSetting::radioButtonClicked()
{
}

void VSCSetting::removeAll()
{
	m_Layout->removeWidget(m_License);
	m_License->hide();
	m_Layout->removeWidget(m_Version);
	m_Version->hide();
	m_Layout->removeWidget(m_User);
	m_User->hide();

	m_Layout->removeWidget(m_Language);
	m_Language->hide();

	m_Layout->removeWidget(m_HdfsRecord);
	m_HdfsRecord->hide();
	m_Layout->removeWidget(m_RtspRtp);
	m_RtspRtp->hide();

	m_Layout->removeWidget(m_OAPI);
	m_OAPI->hide();

	m_Layout->removeWidget(m_VideoSetting);
	m_VideoSetting->hide();

	m_Layout->removeWidget(m_MiningSetting);
	m_MiningSetting->hide();
}

void VSCSetting::treeClicked(QTreeWidgetItem *item, int column)
{
	QTreeWidgetItem *parent = item->parent();
	if(NULL==parent) 
	    return;
	int col = parent->indexOfChild(item); 
	if (ui.treeWidget->topLevelItem(VSC_SETTING_INDEX_SYSTEM) == parent)
	{
		VDC_DEBUG( "%s  System Setting\n",__FUNCTION__);
		/* col 1 is the license */
		if (col == 1)
		{
			removeAll();
			VDC_DEBUG( "%s  System Setting Add license\n",__FUNCTION__);
			m_Layout->addWidget(m_License);
			m_License->show();
		}else if (col == 0)
		{
			removeAll();
			m_Layout->addWidget(m_Version);
			m_Version->show();
		}else if (col == 2)
		{
			removeAll();
			m_Layout->addWidget(m_User);
			m_User->show();
		}else if (col == 3)
		{
			removeAll();
			m_Layout->addWidget(m_Language);
			m_Language->show();
		}
	}else if (ui.treeWidget->topLevelItem(VSC_SETTING_INDEX_NETWORK) == parent)
	{
		VDC_DEBUG( "%s  Media Setting\n",__FUNCTION__);
		if (col == 0)
		{
			removeAll();
			m_Layout->addWidget(m_OAPI);
			m_OAPI->show();
		}
	} else if (ui.treeWidget->topLevelItem(VSC_SETTING_INDEX_MEDIA) == parent)
	{
		VDC_DEBUG( "%s  Media Setting\n",__FUNCTION__);
		if (col == 0)
		{
			removeAll();
			m_Layout->addWidget(m_RtspRtp);
			m_RtspRtp->show();
		}else if (col == 1)
		{
			removeAll();
			m_Layout->addWidget(m_VideoSetting);
			m_VideoSetting->show();
		}
	}
	else if (ui.treeWidget->topLevelItem(VSC_SETTING_INDEX_STORAGE) == parent)
	{
		VDC_DEBUG( "%s  Stroage Setting\n",__FUNCTION__);
		if (col == 0)
		{
			removeAll();
			m_Layout->addWidget(m_HdfsRecord);
			m_HdfsRecord->show();
		}
	}
	else if (ui.treeWidget->topLevelItem(VSC_SETTING_INDEX_MINING) == parent)
	{
		VDC_DEBUG( "%s  Mining Setting\n",__FUNCTION__);
		if (col == 0)
		{
			removeAll();
			m_Layout->addWidget(m_MiningSetting);
			m_MiningSetting->show();
		}
	}

	VDC_DEBUG( "%s  col %d column %d\n",__FUNCTION__, col, column);

	
}