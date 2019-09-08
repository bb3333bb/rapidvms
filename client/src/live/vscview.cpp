/** <!--
 *
 *  Copyright (C) 2017 veyesys support@veyesys.com
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  If you would like this software to be made available to you under an 
 *  alternate commercial license please email support@veyesys.com 
 *  for more information.
 *
 * -->
 */
#include "vscview.h"
#include "debug.hpp"
#include <QDesktopWidget>
#include <QApplication>
#include <QMouseEvent>
#include <QHoverEvent>
#include <QDesktopWidget>
#include <QApplication>
#include "vvidpb1.h"
#include "vscviewconf.h"
#include "Poco/UUIDGenerator.h"

using namespace Poco;

VSCView::VSCView(ClientFactory &pFactory, QWidget *parent, QTabWidget &pTabbed, 
	QString strName, bool bMainView)
    : m_pFactory(pFactory), QWidget(parent), m_pTabbed(pTabbed), m_currentFocus(-1), 
    m_bControlEnable(TRUE), m_strName(strName), m_bFloated(FALSE), 
	m_TimerTour(NULL), m_bMainView(bMainView)
{
	ui.setupUi(this);
	m_pParent = parent;
	m_lastHoverTime = time(NULL);

	this->setAttribute(Qt::WA_Hover,true);
	QVBoxLayout* layout = new QVBoxLayout();
	m_pVideo = new VSCVideoWall(m_pFactory, this->ui.widget, this);
	m_pVideo->hide();
	//layout->setSpacing(10);

	layout->addWidget(m_pVideo);
	layout->setMargin(0);

	this->ui.widget->setLayout(layout);

	m_pVideo->show();

	SetupConnections();
	createContentMenu();
#if 0
	m_pPlayControl = new VSCPlayControl();
	m_bPlayControl = FALSE;
	m_pPlayControl->hide();
	VSCViewDataItemDefault(m_ViewItem);
#endif
	ui.pushButton8x8->hide();
	setMouseTracking(true);

	m_Timer = new QTimer(this);
	connect(m_Timer,SIGNAL(timeout()),this,SLOT(UpdateVideoControl())); 
	m_Timer->start(1000); 

	TourStop();
	ShowFocusClicked(0);
	/* Set the uuid to null */
	m_ViewItem.set_strid(VVID_UUID_NULL);
	m_ViewItem.set_strname("New View");

#ifndef _WIN32
	ui.hwdecode->hide();
	ui.lbhwdecode->hide();
#endif
	if (m_pFactory.GetAutoFullScreen() == true && m_bMainView == true)
	{
		ControlPanelClicked();
	}
}

bool VSCView::GetHWDec()
{
#ifdef __APPLE__
	return false;
#endif
#ifndef _WIN32
	return false;//linux here
#endif
	//bool bEnable = ui.hwdecode->isChecked();
	bool bEnable = ui.hwdecode->isToggled();
	return bEnable;
}

void VSCView::PlaybackClicked(std::string strStor, std::string strId, 
						std::string strName)
{
	VVidPB1 *pPB1 = new VVidPB1(m_pFactory);
	pPB1->show();

	s32 currentTime = time(NULL) - 5 * 60;
	if (currentTime < 0)
	{
		currentTime = 0;
	}
	
	pPB1->StartPlay(strStor, strId, strName, currentTime);
}

void VSCView::MotionDetectClicked(std::string strStor, std::string strId, 
						std::string strName)
{
	VSCVWidget * pVideo = new VSCVWidget(m_pFactory, 0, NULL, true);

	pVideo->ShowVideoInfo(false);
	
	pVideo->setWindowTitle(QApplication::translate("VSCMainWindowsClass", 
								strName.c_str(), 0));	
	pVideo->StartPlay(strStor, strId, strName, true);
	pVideo->show();	
}

void VSCView::UpdateVideoControl()
{
   time_t current = time(NULL);

    if (current - m_lastHoverTime > 3)
    {
        //m_pVideo->OffAllFocus();
    }
}


void VSCView::SetupConnections()
{
	connect(ui.pushButton2x2, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode2x2()));
	connect(ui.pushButton3x3, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode3x3()));
	connect(ui.pushButton4x4, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode4x4()));
	connect(ui.pushButton6, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode6()));
	connect(ui.pushButton1, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode1()));
	connect(ui.pushButton12p1, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode12p1()));
	connect(ui.pushButton5x5, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode5x5()));
	connect(ui.pushButton6x6, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode6x6()));
	connect(ui.pushButton8x8, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode8x8()));
	connect(ui.pushButton1x3, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode1x3()));
	connect(ui.pushButton1p6, SIGNAL(clicked()), m_pVideo, SLOT(SetLayoutMode1p6()));

	connect(ui.pushButton2x2, SIGNAL(clicked()), this, SLOT(SetLayoutMode2x2()));
	connect(ui.pushButton3x3, SIGNAL(clicked()), this, SLOT(SetLayoutMode3x3()));
	connect(ui.pushButton4x4, SIGNAL(clicked()), this, SLOT(SetLayoutMode4x4()));
	connect(ui.pushButton6, SIGNAL(clicked()), this, SLOT(SetLayoutMode6()));
	connect(ui.pushButton1, SIGNAL(clicked()), this, SLOT(SetLayoutMode1()));
	connect(ui.pushButton12p1, SIGNAL(clicked()), this, SLOT(SetLayoutMode12p1()));
	connect(ui.pushButton5x5, SIGNAL(clicked()), this, SLOT(SetLayoutMode5x5()));
	connect(ui.pushButton6x6, SIGNAL(clicked()), this, SLOT(SetLayoutMode6x6()));

	connect(ui.pushButton8x8, SIGNAL(clicked()), this, SLOT(SetLayoutMode8x8()));
	connect(ui.pushButton1x3, SIGNAL(clicked()), this, SLOT(SetLayoutMode1x3()));
	connect(ui.pushButton1p6, SIGNAL(clicked()), this, SLOT(SetLayoutMode1p6()));
	
	connect(ui.pushButtonView, SIGNAL(clicked()), this, SLOT(ViewClicked()));
	//connect(ui.pushButtonPB, SIGNAL(clicked()), this, SLOT(ShowPlayControl()));
	connect(m_pVideo, SIGNAL(ShowDisplayClicked(int)), this,
	                                    SLOT(ShowDisplayClicked(int)));
	connect(m_pVideo, SIGNAL(ShowFloatingClicked()), this,
	                                    SLOT(floatingClicked()));
	connect(m_pVideo, SIGNAL(ShowControlPanelClicked()), this,
	                                    SLOT(ControlPanelClicked()));                             
	connect(m_pVideo, SIGNAL(ShowTabbedClicked()), this,
	                                    SLOT(TabbedClicked()));
	connect(m_pVideo, SIGNAL(ShowFocusClicked(int)), this,
	                                    SLOT(ShowFocusClicked(int)));
	connect(m_pVideo, SIGNAL(Layout1Clicked(int)), this,
	                                    SLOT(ShowLayout1Clicked(int)));
	connect(m_pVideo, SIGNAL(PlaybackClicked(std::string, std::string, std::string)), this,
	                                    SLOT(PlaybackClicked(std::string, std::string, std::string)));
	connect(m_pVideo, SIGNAL(MotionDetectClicked(std::string, std::string, std::string)), this,
	                                    SLOT(MotionDetectClicked(std::string, std::string, std::string)));
	connect(m_pVideo, SIGNAL(ShowViewClicked(std::string)), this,
	                                    SLOT(ShowViewClicked(std::string)));

	connect(m_pVideo, SIGNAL(SignalUpdateMainView()), this,
	                                    SLOT(SlotUpdateMainView()));	

	connect(ui.pbTourPlay, SIGNAL(clicked()), this, SLOT(TourStart()));
	connect(ui.pbTourStop, SIGNAL(clicked()), this, SLOT(TourStop()));
	
}

VSCView::~VSCView()
{
	TourStop();
	//m_pPlayControl->hide();
	//delete m_pPlayControl;
	
}

void VSCView::TourStop()
{
	ui.pbTourPlay->show();
	ui.pbTourStop->hide();
	if (m_TimerTour)
	{

		m_TimerTour->stop();
		delete m_TimerTour;
		m_TimerTour = NULL;
	}
}

void VSCView::TourStart()
{
	ui.pbTourPlay->hide();
	ui.pbTourStop->show();

	TourInit();
	m_TimerTour = new QTimer(this);
	connect(m_TimerTour,SIGNAL(timeout()), this, SLOT(TourTimerFunction()));
	TourTimerFunction();
	m_TimerTour->start(m_TourInterval); 
}

void VSCView::TourInit()
{
	VidTour empty;
	m_pTourConf = empty;
	//TODO Tour Configuration
	
	/* Get the tool configure from db */
	m_TourInterval = 20 * 1000;

	switch(ui.tourInterval->currentIndex())
	{
	    case 0:
		m_TourInterval = 20 * 1000;
		break;
	    case 1:
		m_TourInterval = 40 * 1000;
		break;
	    case 2:
		m_TourInterval = 60 * 1000;
		break;
	    case 3:
		m_TourInterval = 60 * 1000;
		break;
	    case 4:
		m_TourInterval = 3 * 60 * 1000;
		break;
	    case 5:
		m_TourInterval = 5 * 60 * 1000;
		break;
	    default:
	        break;
	}	

	m_pFactory.GetConfDB().GetViewListConf(m_ViewList);

	m_TourIdx = 0;
}

void VSCView::TourTimerFunction()
{
	int viewSize = m_ViewList.cvidview_size();
	if (viewSize <= 0)
	{
		return;
	}
	if (m_TourIdx >= viewSize || m_TourIdx < 0)
	{
		m_TourIdx = 0;
		
	}

	const VidView &pView = m_ViewList.cvidview(m_TourIdx);

	std::map<int, VidViewWindow> playMap;
	int nViewSize = pView.cview_size();
	
	for (s32 i = 0; i < pView.cview_size(); i ++)
	{
		const VidViewWindow &win = pView.cview(i);
		playMap[win.nwindowsid()] = win;
	}

	m_pVideo->SetPlayMap(playMap, (VideoWallLayoutMode)(pView.clayout()));
	m_TourIdx ++;
	
	return;
}

void VSCView::CameraDoubleClicked(astring strStor, astring strCam, 
						astring strCamName)
{

	m_pVideo->PlayVideoByWindow(m_currentFocus, strStor, strCam, strCamName);

	return;
}



void VSCView::mouseMoveEvent(QMouseEvent *event)
{
	QPoint posView = mapToGlobal(QPoint(0,0));
	QPoint posEvent = event->globalPos();
        VDC_DEBUG( "%s View (%d, %d)  Event (%d, %d)\n", 
			__FUNCTION__, posView.x(), posView.y(), 
			posEvent.x(), posEvent.y());
        //m_pVideo->OffAllFocus();
}

bool VSCView::event(QEvent *e)
{
	//VDC_DEBUG("%s Event Type %d\n", __FUNCTION__, e->type());


	if(e->type() == QEvent::HideToParent )
		//|| e->type() == QEvent::WindowDeactivate)
	{
		m_pVideo->OffAllFocus();
	}
	if(e->type() == QEvent::WindowActivate)
	{
		m_pVideo->ResizeAllVideo();
	}
	
	QHoverEvent *event = static_cast<QHoverEvent*> (e);
	if (event == NULL)
	{
		return true;
	}
   if(e->type() == QEvent::HoverMove)
    {
	QPoint posView = mapToGlobal(QPoint(0,0));
	QPoint posEvent = event->pos();
        //VDC_DEBUG( "%s View (%d, %d)  Event (%d, %d)\n", 
	//		__FUNCTION__, posView.x(), posView.y(), 
	//		posEvent.x(), posEvent.y());
        //m_pVideo->OffAllFocus();
        m_lastHoverTime = time(NULL);
    }

    if(e->type() == QEvent::HoverLeave)
    {
	QPoint posView = mapToGlobal(QPoint(0,0));
	QPoint posEvent = event->pos();
#if 0
        VDC_DEBUG( "%s Leave View (%d, %d)  Event (%d, %d)\n", 
			__FUNCTION__, posView.x(), posView.y(), 
			posEvent.x(), posEvent.y());
#endif
    }


    return QWidget::event(e);
}


void VSCView::ShowPlayControl()
{
    if (m_bPlayControl == FALSE)
    {
        m_bPlayControl = TRUE;
        //m_pPlayControl->show();
        int x, y, w, h;
        x = this->x();
        y = this->y();
        w = width();
        h = height(); 
        VDC_DEBUG( "%s rect x:%d y:%d w:%d h:%d \n",__FUNCTION__, x, y, w, h);
        //m_pPlayControl->move(x + w/2 - 200, y + h - 60);
    }else
    {
        m_bPlayControl = FALSE;
       // m_pPlayControl->hide();
    }

}

void VSCView::ShowDisplayClicked(int nId)
{
    if (m_bFloated == FALSE)
    {
        return;
    }
    m_pVideo->ShowVideoInfo(false);

    QDesktopWidget *desktop = QApplication::desktop();
    if ( 1==desktop->screenCount()  ) {
        // single monitor - use built in
        showFullScreen();
    } else {
        QRect rect = desktop->screenGeometry(nId);
        //move(rect.topLeft());
        setGeometry(desktop->screenGeometry(nId));
        setWindowState(Qt::WindowFullScreen | windowState());
        move(rect.topLeft());
        resize(rect.width(), rect.height());
    }

}

void VSCView::ShowFocusClicked(int nId)
{
    //if (m_currentFocus != nId)
    {
        if (m_currentFocus != -1)
        {
            m_pVideo->SetVideoFocus(m_currentFocus, FALSE);
        }
        m_pVideo->SetVideoFocus(nId, TRUE);
        m_currentFocus = nId;
    }
}

void VSCView::ShowLayout1Clicked(int nId)
{
    m_pVideo->SetLayout1Mode(nId);
}

void VSCView::mouseDoubleClickEvent(QMouseEvent *e)
{
    VDC_DEBUG( "%s mouseDoubleClickEvent\n",__FUNCTION__);
    QWidget::mouseDoubleClickEvent(e);
#if 0
    if(isFullScreen()) {
        //setParent(m_pParent);
        //resize(m_pParent->width(), m_pParent->height());
        //showMaximized();
        this->setWindowState(Qt::WindowMaximized);
    } else {
        //m_pParent = parentWidget();
        //setParent(NULL);
        //showFullScreen();
        this->setWindowState(Qt::WindowFullScreen);
    }
#endif
}

void VSCView::floatingClicked()
{
    if (m_bFloated == TRUE)
    {
        return;
    }

    m_pTabbed.setCurrentWidget(this);
    int thisIndex = m_pTabbed.currentIndex();

    m_pTabbed.removeTab(thisIndex);
    setParent(NULL);
    showMaximized();
    m_bFloated = TRUE;
}

void VSCView::ControlPanelClicked()
{
	if (m_bControlEnable == TRUE)
	{
		ui.widgetControl->hide();
		m_bControlEnable = FALSE;
	}else
	{
		ui.widgetControl->show();
		m_bControlEnable = TRUE;
	}

	return;
}

void VSCView::TabbedClicked()
{
    if (m_bFloated == FALSE)
    {
        return;
    }
    m_pVideo->ShowVideoInfo(true);
    VideoWallLayoutMode nMode;
    m_pVideo->GetLayoutMode(nMode);
    QIcon icon1;
    switch(nMode)
    {
        case LAYOUT_MODE_2X2:
            icon1.addFile(QStringLiteral(":/view/resources/2x2.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_3X3:
            icon1.addFile(QStringLiteral(":/view/resources/3x3.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_4X4:
            icon1.addFile(QStringLiteral(":/view/resources/4x4.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_1:
            icon1.addFile(QStringLiteral(":/view/resources/1x1.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_6:
            icon1.addFile(QStringLiteral(":/view/resources/6.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_12p1:
            icon1.addFile(QStringLiteral(":/view/resources/12+1.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_5x5:
            icon1.addFile(QStringLiteral(":/view/resources/5x5.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_6x6:
            icon1.addFile(QStringLiteral(":/view/resources/6x6.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_8x8:
            icon1.addFile(QStringLiteral(":/view/resources/8x8.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_1x3:
            icon1.addFile(QStringLiteral(":/view/resources/1x3.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_1p6:
            icon1.addFile(QStringLiteral(":/view/resources/1p6.png"), 
                QSize(), QIcon::Normal, QIcon::Off);
            break;
        case LAYOUT_MODE_ONE:
            break;
        default:
            break;
    }
    setParent(m_pParent);
    m_pTabbed.addTab(this,icon1, m_strName);
    m_pTabbed.setCurrentWidget(this);
    showMaximized();
    //showFullScreen();
    
    //resize(m_pParent->width(), m_pParent->height());

    m_bFloated = FALSE;
}


void VSCView::createContentMenu()
{

}

void VSCView::ViewClicked()
{
	VideoWallLayoutMode nMode;
	m_pVideo->GetLayoutMode(nMode);	
       VSCViewConf view;
	view.SetName(m_ViewItem.strname());
       view.show();
       QDesktopWidget *desktop = QApplication::desktop();
	QRect rect = desktop->screenGeometry(0);
	view.setGeometry(rect.width()/2 -view.width()/2 , 
					rect.height()/2 - view.height()/2, 
					view.width(), view.height());
       view.exec();


	VSCViewConfType type = view.GetType();
	if (type == VSC_VIEW_CONF_LAST)
	{
		return;
	}
	VidView NewView;
	NewView.set_clayout((VidLayout)nMode);
	string strName = "View";
	view.GetName(strName);

	std::map<int, VidViewWindow> playMap;
	m_pVideo->GetPlayMap(playMap);
	std::map<int, VidViewWindow>::iterator it = playMap.begin(); 
	for(; it!=playMap.end(); ++it)
	{
		VidViewWindow * pWinNew = NewView.add_cview();
		*pWinNew = (*it).second;
	}
	
	NewView.set_strname(strName);
	if (type == VSC_VIEW_CONF_MODIFY && m_ViewItem.strid() != VVID_UUID_NULL)
	{
		m_pFactory.DelView(m_ViewItem.strid());
		NewView.set_strid(m_ViewItem.strid());
	}else
	{
		UUIDGenerator uuidCreator;
		astring strId  = uuidCreator.createRandom().toString();
		NewView.set_strid(strName);
	}
	m_pFactory.AddView(NewView);
	m_ViewItem = NewView;
	
	
	SlotUpdateMainView();
}


/* update the main view  */
void VSCView::SlotUpdateMainView()
{
	if (m_bMainView == false)
	{
		return;
	}
	VideoWallLayoutMode nMode;
	m_pVideo->GetLayoutMode(nMode);	

	VidView NewView;
	NewView.set_clayout((VidLayout)nMode);

	std::map<int, VidViewWindow> playMap;
	m_pVideo->GetPlayMap(playMap);
	std::map<int, VidViewWindow>::iterator it = playMap.begin(); 
	for(; it!=playMap.end(); ++it)
	{
		VidViewWindow * pWinNew = NewView.add_cview();
		*pWinNew = (*it).second;
	}
	
	NewView.set_strname("Last View");
	NewView.set_strid(VVID_MAIN_VIEW);
	m_pFactory.DelView(VVID_MAIN_VIEW);

	m_pFactory.AddView(NewView);
}

void VSCView::ShowViewClicked(std::string strView)
{
	VidView pView;
	if (m_pFactory.GetConfDB().GetViewConf(strView, pView)  == false)
	{
		return;
	}

	m_ViewItem = pView;

	std::map<int, VidViewWindow> playMap;
	int nViewSize = pView.cview_size();
	//printf("%s %d view size %d layout %d\n", __FILE__, __LINE__, nViewSize, 
	//	(VideoWallLayoutMode)(pView.clayout()));
	
	for (s32 i = 0; i < pView.cview_size(); i ++)
	{
		const VidViewWindow &win = pView.cview(i);
		playMap[win.nwindowsid()] = win;
		//printf("%s %d view id %d\n", __FILE__, __LINE__, win.nwindowsid());
	}

	m_pVideo->SetPlayMap(playMap, (VideoWallLayoutMode)(pView.clayout()));
}
