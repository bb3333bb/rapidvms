#!/bin/sh
LD_LIBRARY_PATH=/home/bangnq/working/linkingvision/rapidvms/3rdparty/qt/qtbase-opensource-src-5.7.1/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}
export LD_LIBRARY_PATH
QT_PLUGIN_PATH=/home/bangnq/working/linkingvision/rapidvms/3rdparty/qt/qtbase-opensource-src-5.7.1/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec /home/bangnq/working/linkingvision/rapidvms/3rdparty/qt/qtbase-opensource-src-5.7.1/bin/uic "$@"
