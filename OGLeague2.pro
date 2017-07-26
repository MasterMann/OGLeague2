TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += dep

include(dep/dep.pri)
include(common/common.pri)
include(net/network.pri)
include(stats/stats.pri)
include(object/object.pri)
include(scripts/scripts.pri)
include(packets/packets.pri)

SOURCES += \
    main.cpp \
    netserver.cpp \
    objectmanager.cpp \
    playermanager.cpp \
    game.cpp \
    world.cpp \
    timemanager.cpp \
    map.cpp \
    datamanager.cpp

HEADERS += \
    netserver.h \
    objectmanager.h \
    playermanager.h \
    game.h \
    world.h \
    timemanager.h \
    map.h \
    datamanager.h

win32 {
    LIBS += -lws2_32 -lwinmm
}
