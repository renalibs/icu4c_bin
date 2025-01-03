GENCCODE_ASSEMBLY_TYPE=-a gcc-mingw64
SO=dll
SOBJ=dll
A=a
LIBPREFIX=
LIB_EXT_ORDER=76.dll
COMPILE=gcc   -DU_HAVE_MMAP=0 -DU_HAVE_STRTOD_L=0  -DWINVER=0x0601 -D_WIN32_WINNT=0x0601 -DU_ALL_IMPLEMENTATION -DU_ATTRIBUTE_DEPRECATED= -O3 -I/mingw64/include -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -mthreads  -c
LIBFLAGS=-I/ICU4C_76_1/MinGW/Release/include -DPIC 
GENLIB=gcc -O3 -I/mingw64/include -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -mthreads  -L/mingw64/lib  -shared  -Wl,--enable-auto-import -Wl,--out-implib=./liball.dll.a
LDICUDTFLAGS=
LD_SONAME=
RPATH_FLAGS=
BIR_LDFLAGS=
AR=ar
ARFLAGS=r
RANLIB=ranlib
INSTALL_CMD=/usr/bin/install -c
