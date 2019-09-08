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
#include <QPainter>
#include <QMouseEvent>
#include "switchcontrol.h"

SwitchControl::SwitchControl(QWidget *parent)
    : QWidget(parent),
      m_nHeight(16),
      m_bChecked(false),
      m_radius(8.0),
      m_nMargin(3),
      m_checkedColor(0, 160, 230),
      m_thumbColor(Qt::gray),
      m_disabledColor(190, 190, 190),
      m_background(Qt::black)
{
    // ��껬�������״ - ����
    setCursor(Qt::PointingHandCursor);

    // �����źŲ�
    connect(&m_timer, SIGNAL(timeout()), this, SLOT(onTimeout()));
}

// ���ƿ���
void SwitchControl::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setPen(Qt::NoPen);
    painter.setRenderHint(QPainter::Antialiasing);

    QPainterPath path;
    QColor background;
    QColor thumbColor;
    qreal dOpacity;
    if (isEnabled()) { // ����״̬
        if (m_bChecked) { // ��״̬
            background = m_checkedColor;
            thumbColor = m_checkedColor;
            dOpacity = 0.600;
        } else { //�ر�״̬
            background = m_background;
            thumbColor = m_thumbColor;
            dOpacity = 0.800;
        }
    } else {  // ������״̬
        background = m_background;
        dOpacity = 0.260;
        thumbColor = m_disabledColor;
    }
    // ���ƴ���Բ
    painter.setBrush(background);
    painter.setOpacity(dOpacity);
    path.addRoundedRect(QRectF(m_nMargin, m_nMargin, width() - 2 * m_nMargin, height() - 2 * m_nMargin), m_radius, m_radius);
    painter.drawPath(path.simplified());

    // ����С��Բ
    painter.setBrush(thumbColor);
    painter.setOpacity(1.0);
    painter.drawEllipse(QRectF(m_nX - (m_nHeight / 2), m_nY - (m_nHeight / 2), height(), height()));
}

// ��갴���¼�
void SwitchControl::mousePressEvent(QMouseEvent *event)
{
    if (isEnabled()) {
        if (event->buttons() & Qt::LeftButton) {
            event->accept();
        } else {
            event->ignore();
        }
    }
}

// ����ͷ��¼� - �л�����״̬������toggled()�ź�
void SwitchControl::mouseReleaseEvent(QMouseEvent *event)
{
    if (isEnabled()) {
        if ((event->type() == QMouseEvent::MouseButtonRelease) && (event->button() == Qt::LeftButton)) {
            event->accept();
            m_bChecked = !m_bChecked;
            emit toggled(m_bChecked);
            m_timer.start(10);
        } else {
            event->ignore();
        }
    }
}

// ��С�ı��¼�
void SwitchControl::resizeEvent(QResizeEvent *event)
{
    m_nX = m_nHeight / 2;
    m_nY = m_nHeight / 2;
    QWidget::resizeEvent(event);
}

// Ĭ�ϴ�С
QSize SwitchControl::sizeHint() const
{
    return minimumSizeHint();
}

// ��С��С
QSize SwitchControl::minimumSizeHint() const
{
    return QSize(2 * (m_nHeight + m_nMargin), m_nHeight + 2 * m_nMargin);
}

// �л�״̬ - ����
void SwitchControl::onTimeout()
{
    if (m_bChecked) {
        m_nX += 1;
        if (m_nX >= width() - m_nHeight)
            m_timer.stop();
    } else {
        m_nX -= 1;
        if (m_nX <= m_nHeight / 2)
            m_timer.stop();
    }
    update();
}

// ���ؿ���״̬ - �򿪣�true �رգ�false
bool SwitchControl::isToggled() const
{
    return m_bChecked;
}

// ���ÿ���״̬
void SwitchControl::setToggle(bool checked)
{
    m_bChecked = checked;
    m_timer.start(10);
}

// ���ñ�����ɫ
void SwitchControl::setBackgroundColor(QColor color)
{
    m_background = color;
}

// ����ѡ����ɫ
void SwitchControl::setCheckedColor(QColor color)
{
    m_checkedColor = color;
}

// ���ò�������ɫ
void SwitchControl::setDisbaledColor(QColor color)
{
    m_disabledColor = color;
}