GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.76.1.dylib
COMPILE=cc -DU_ALL_IMPLEMENTATION -DU_ATTRIBUTE_DEPRECATED= -I/usr/local/opt/openssl@1.1/include   -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=1  -O2  -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -fno-common -c
LIBFLAGS=-I/Users/hisaki/Desktop/src/Release/MacOS/Clang/include  -dynamic
GENLIB=cc -dynamiclib -dynamic -O2  -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -L/usr/local/opt/openssl@1.1/lib  
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,76 -Wl,-current_version -Wl,76.1 -install_name  
RPATH_FLAGS=
BIR_LDFLAGS=
AR=ar
ARFLAGS=r -c
RANLIB=ranlib
INSTALL_CMD=/usr/bin/install -c
