CONFIG +=  compile_examples qpa largefile precompile_header use_gold_linker enable_new_dtags sse2 sse3 ssse3 sse4_1 sse4_2 avx avx2 avx512f avx512er avx512cd avx512pf avx512dq avx512bw avx512vl avx512ifma avx512vbmi pcre
QT_BUILD_PARTS +=  libs
QT_NO_DEFINES =  ALSA CUPS EGL EGLFS EGL_X11 FONTCONFIG GLIB IMAGEFORMAT_JPEG LIBPROXY OPENSSL OPENVG PULSEAUDIO SSL TSLIB XKB ZLIB
QT_QCONFIG_PATH = 
host_build {
    QT_CPU_FEATURES.x86_64 =  mmx sse sse2
} else {
    QT_CPU_FEATURES.x86_64 =  mmx sse sse2
}
QT_COORD_TYPE = double
QT_LFLAGS_ODBC   = -lodbc
styles += mac fusion windows
DEFINES += QT_NO_MTDEV
DEFINES += QT_NO_LIBUDEV
DEFINES += QT_NO_TSLIB
DEFINES += QT_NO_LIBINPUT
QMAKE_X11_PREFIX = /usr
DEFINES += QT_NO_XKB
QMAKE_XKB_CONFIG_ROOT = /usr/share/X11/xkb
sql-drivers = 
sql-plugins =  sqlite
