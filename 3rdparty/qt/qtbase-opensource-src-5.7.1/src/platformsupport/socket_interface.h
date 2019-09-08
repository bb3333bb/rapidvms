/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: 
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef SOCKET_INTERFACE_H
#define SOCKET_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "struct_marshallers_p.h"

/*
 * Proxy class for interface org.a11y.atspi.Socket
 */
class OrgA11yAtspiSocketInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.a11y.atspi.Socket"; }

public:
    OrgA11yAtspiSocketInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgA11yAtspiSocketInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QSpiObjectReference> Embed(const QSpiObjectReference &plug)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(plug);
        return asyncCallWithArgumentList(QStringLiteral("Embed"), argumentList);
    }

    inline QDBusPendingReply<> Unembed(const QSpiObjectReference &plug)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(plug);
        return asyncCallWithArgumentList(QStringLiteral("Unembed"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Available();
};

namespace org {
  namespace a11y {
    namespace atspi {
      typedef ::OrgA11yAtspiSocketInterface Socket;
    }
  }
}
#endif
