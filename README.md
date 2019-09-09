# rapidvms
forked from https://github.com/linkingvision/rapidvms, revision: a16b31f8c87f1e5e1c116d4a5304d617e77a64fc

  # Build #
  ### Linux ###

    ubuntu: sudo apt-get install  "^libxcb.*" build-essential shtool libtool automake autoconf libbsd-dev libx11-xcb-dev libglu1-mesa-dev     libxrender-dev libxi-dev cmake libx11-dev yasm libxext-dev libgl1-mesa-dev  zlib1g-dev freeglut3-dev uuid-dev

    Change VE_PATH in the rules.mk
    $source ./rules.mk
    $make
