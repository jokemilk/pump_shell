#############################################################################
# Makefile for building: pump_shell
# Generated by qmake (2.01a) (Qt 4.8.0) on: Sun Jun 3 18:17:29 2012
# Project:  pump_shell.pro
# Template: app
# Command: /opt/EmbedSky/qt-4.8-arm/bin/qmake -spec /opt/EmbedSky/qt-4.8-arm/mkspecs/qws/linux-arm-g++ CONFIG+=debug -o Makefile pump_shell.pro
#############################################################################

####### Compiler, tools and options

CC            = arm-linux-gcc
CXX           = arm-linux-g++
DEFINES       = -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/opt/EmbedSky/qt-4.8-arm/mkspecs/qws/linux-arm-g++ -I. -I/opt/EmbedSky/qt-4.8-arm/include/QtCore -I/opt/EmbedSky/qt-4.8-arm/include/QtNetwork -I/opt/EmbedSky/qt-4.8-arm/include/QtGui -I/opt/EmbedSky/qt-4.8-arm/include -I. -I.
LINK          = arm-linux-g++ -lts
LFLAGS        = -Wl,-rpath,/opt/EmbedSky/qt-4.8-arm/lib
LIBS          = $(SUBLIBS)  -L/opt/EmbedSky/qt-4.8-arm//lib -lQtGui -L/opt/tslib_install/lib -L/opt/EmbedSky/qt-4.8-arm//lib -lQtNetwork -lQtCore -lpthread 
AR            = arm-linux-ar cqs
RANLIB        = 
QMAKE         = /opt/EmbedSky/qt-4.8-arm/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = arm-linux-strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		pump_shell.cpp \
		global.cpp \
		setting.cpp moc_pump_shell.cpp \
		moc_setting.cpp
OBJECTS       = main.o \
		pump_shell.o \
		global.o \
		setting.o \
		moc_pump_shell.o \
		moc_setting.o
DIST          = /opt/EmbedSky/qt-4.8-arm/mkspecs/common/unix.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/linux.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/gcc-base.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/gcc-base-unix.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/g++-base.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/g++-unix.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/qws.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/qconfig.pri \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/modules/qt_webkit_version.pri \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/qt_functions.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/qt_config.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/exclusive_builds.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/default_pre.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/debug.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/default_post.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/warn_on.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/qt.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/unix/thread.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/moc.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/resources.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/uic.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/yacc.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/lex.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/include_source_dir.prf \
		pump_shell.pro
QMAKE_TARGET  = pump_shell
DESTDIR       = 
TARGET        = pump_shell

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_pump_shell.h ui_setting.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: pump_shell.pro  /opt/EmbedSky/qt-4.8-arm/mkspecs/qws/linux-arm-g++/qmake.conf /opt/EmbedSky/qt-4.8-arm/mkspecs/common/unix.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/linux.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/gcc-base.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/gcc-base-unix.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/g++-base.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/g++-unix.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/common/qws.conf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/qconfig.pri \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/modules/qt_webkit_version.pri \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/qt_functions.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/qt_config.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/exclusive_builds.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/default_pre.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/debug.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/default_post.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/warn_on.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/qt.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/unix/thread.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/moc.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/resources.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/uic.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/yacc.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/lex.prf \
		/opt/EmbedSky/qt-4.8-arm/mkspecs/features/include_source_dir.prf \
		/opt/EmbedSky/qt-4.8-arm/lib/libQtGui.prl \
		/opt/EmbedSky/qt-4.8-arm/lib/libQtNetwork.prl \
		/opt/EmbedSky/qt-4.8-arm/lib/libQtCore.prl
	$(QMAKE) -spec /opt/EmbedSky/qt-4.8-arm/mkspecs/qws/linux-arm-g++ CONFIG+=debug -o Makefile pump_shell.pro
/opt/EmbedSky/qt-4.8-arm/mkspecs/common/unix.conf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/common/linux.conf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/common/gcc-base.conf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/common/gcc-base-unix.conf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/common/g++-base.conf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/common/g++-unix.conf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/common/qws.conf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/qconfig.pri:
/opt/EmbedSky/qt-4.8-arm/mkspecs/modules/qt_webkit_version.pri:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/qt_functions.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/qt_config.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/exclusive_builds.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/default_pre.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/debug.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/default_post.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/warn_on.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/qt.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/unix/thread.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/moc.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/resources.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/uic.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/yacc.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/lex.prf:
/opt/EmbedSky/qt-4.8-arm/mkspecs/features/include_source_dir.prf:
/opt/EmbedSky/qt-4.8-arm/lib/libQtGui.prl:
/opt/EmbedSky/qt-4.8-arm/lib/libQtNetwork.prl:
/opt/EmbedSky/qt-4.8-arm/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /opt/EmbedSky/qt-4.8-arm/mkspecs/qws/linux-arm-g++ CONFIG+=debug -o Makefile pump_shell.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/pump_shell1.0.0 || $(MKDIR) .tmp/pump_shell1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/pump_shell1.0.0/ && $(COPY_FILE) --parents pump_shell.h pump_command.h global.h setting.h .tmp/pump_shell1.0.0/ && $(COPY_FILE) --parents main.cpp pump_shell.cpp global.cpp setting.cpp .tmp/pump_shell1.0.0/ && $(COPY_FILE) --parents pump_shell.ui setting.ui .tmp/pump_shell1.0.0/ && (cd `dirname .tmp/pump_shell1.0.0` && $(TAR) pump_shell1.0.0.tar pump_shell1.0.0 && $(COMPRESS) pump_shell1.0.0.tar) && $(MOVE) `dirname .tmp/pump_shell1.0.0`/pump_shell1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/pump_shell1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_pump_shell.cpp moc_setting.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_pump_shell.cpp moc_setting.cpp
moc_pump_shell.cpp: pump_shell.h
	/opt/EmbedSky/qt-4.8-arm//bin/moc $(DEFINES) $(INCPATH) pump_shell.h -o moc_pump_shell.cpp

moc_setting.cpp: setting.h
	/opt/EmbedSky/qt-4.8-arm//bin/moc $(DEFINES) $(INCPATH) setting.h -o moc_setting.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_pump_shell.h ui_setting.h
compiler_uic_clean:
	-$(DEL_FILE) ui_pump_shell.h ui_setting.h
ui_pump_shell.h: pump_shell.ui
	/opt/EmbedSky/qt-4.8-arm/bin/uic pump_shell.ui -o ui_pump_shell.h

ui_setting.h: setting.ui
	/opt/EmbedSky/qt-4.8-arm/bin/uic setting.ui -o ui_setting.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp pump_shell.h \
		setting.h \
		global.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

pump_shell.o: pump_shell.cpp pump_shell.h \
		ui_pump_shell.h \
		pump_command.h \
		global.h \
		setting.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o pump_shell.o pump_shell.cpp

global.o: global.cpp global.h \
		setting.h \
		pump_shell.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o global.o global.cpp

setting.o: setting.cpp setting.h \
		ui_setting.h \
		global.h \
		pump_shell.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o setting.o setting.cpp

moc_pump_shell.o: moc_pump_shell.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_pump_shell.o moc_pump_shell.cpp

moc_setting.o: moc_setting.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_setting.o moc_setting.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

