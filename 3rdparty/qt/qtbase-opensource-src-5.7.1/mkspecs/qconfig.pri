#configuration
CONFIG +=  shared qpa release qt_no_framework
host_build {
    QT_ARCH = x86_64
    QT_TARGET_ARCH = x86_64
} else {
    QT_ARCH = x86_64
}
QT_CONFIG +=  minimal-config small-config medium-config large-config full-config no-pkg-config evdev xlib xrender xcb-plugin xcb-render xcb-glx xcb-xlib xkbcommon-qt accessibility-atspi-bridge linuxfb c++11 c++14 c++1z accessibility opengl shared qpa reduce_exports reduce_relocations clock-gettime clock-monotonic posix_fallocate mremap getaddrinfo ipv6ifname getifaddrs inotify eventfd threadsafe-cloexec poll_ppoll png doubleconversion freetype harfbuzz system-zlib iconv dbus xcb xinput2 rpath concurrent audio-backend release

#versioning
QT_VERSION = 5.7.1
QT_MAJOR_VERSION = 5
QT_MINOR_VERSION = 7
QT_PATCH_VERSION = 1

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 

QT_EDITION = OpenSource

QT_COMPILER_STDCXX = 201402
QT_GCC_MAJOR_VERSION = 7
QT_GCC_MINOR_VERSION = 0
QT_GCC_PATCH_VERSION = 0
