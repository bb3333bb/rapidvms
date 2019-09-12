FROM ubuntu:18.04 as vmsbase
RUN apt-get update && \
    apt-get install -y  "^libxcb.*" build-essential shtool \
                        libtool automake autoconf libbsd-dev \
                        libx11-xcb-dev libglu1-mesa-dev libxrender-dev \ 
                        libxi-dev cmake libx11-dev yasm libxext-dev \
                        libgl1-mesa-dev  zlib1g-dev \
                        freeglut3-dev uuid-dev && \
    apt-get clean

RUN mkdir -p /app/rapidvms
ADD . / /app/rapidvms/
RUN ln -s /usr/include/locale.h /usr/include/xlocale.h
RUN cd /app/rapidvms && /bin/bash -c "source /app/rapidvms/rules.mk; make"
