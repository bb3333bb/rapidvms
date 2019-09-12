export VE_PATH=/app/rapidvms

export VE_OS=Ubuntu
export VE_ARCH=64
export VE_VER=18.04
export VE_CROSS_COMPILER=
export VE_INSTALL_DIR=$VE_OS-$VE_VER-$VE_ARCH"bit"
export LD_LIBRARY_PATH=$VE_PATH/output/$VE_INSTALL_DIR/lib/:$LD_LIBRARY_PATH
export PATH=$VE_PATH/output/$VE_INSTALL_DIR"/bin:"$PATH 


