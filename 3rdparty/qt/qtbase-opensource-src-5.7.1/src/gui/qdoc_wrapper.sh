#!/bin/sh
QT_VERSION=5.7.1
export QT_VERSION
QT_VER=5.7
export QT_VER
QT_VERSION_TAG=571
export QT_VERSION_TAG
QT_INSTALL_DOCS=/home/bangnq/working/linkingvision/rapidvms/3rdparty/qt/qtbase-opensource-src-5.7.1/doc
export QT_INSTALL_DOCS
exec /home/bangnq/working/rapidvms/output/Ubuntu-18.04-64bit/bin/qdoc "$@"
