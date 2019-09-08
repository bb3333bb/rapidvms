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
#ifndef SWITCH_CONTROL
#define SWITCH_CONTROL

#include <QWidget>
#include <QTimer>

class SwitchControl : public QWidget
{
    Q_OBJECT

public:
    explicit SwitchControl(QWidget *parent = 0);

    // ���ؿ���״̬ - �򿪣�true �رգ�false
    bool isToggled() const;

    // ���ÿ���״̬
    void setToggle(bool checked);

    // ���ñ�����ɫ
    void setBackgroundColor(QColor color);

    // ����ѡ����ɫ
    void setCheckedColor(QColor color);

    // ���ò�������ɫ
    void setDisbaledColor(QColor color);

protected:
    // ���ƿ���
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

    // ��갴���¼�
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

    // ����ͷ��¼� - �л�����״̬������toggled()�ź�
    void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

    // ��С�ı��¼�
    void resizeEvent(QResizeEvent *event) Q_DECL_OVERRIDE;

    // ȱʡ��С
    QSize sizeHint() const Q_DECL_OVERRIDE;
    QSize minimumSizeHint() const Q_DECL_OVERRIDE;

signals:
    // ״̬�ı�ʱ�������ź�
    void toggled(bool checked);

private slots:
    // ״̬�л�ʱ�����ڲ�������Ч��
    void onTimeout();

private:
    bool m_bChecked;         // �Ƿ�ѡ��
    QColor m_background;     // ������ɫ
    QColor m_checkedColor;   // ѡ����ɫ
    QColor m_disabledColor;  // ��������ɫ
    QColor m_thumbColor;     // Ĵָ��ɫ
    qreal m_radius;          // Բ��
    qreal m_nX;              // x������
    qreal m_nY;              // y������
    qint16 m_nHeight;        // �߶�
    qint16 m_nMargin;        // ��߾�
    QTimer m_timer;          // ��ʱ��
};

#endif // SWITCH_CONTROL