QT -= gui

TEMPLATE = lib
TARGET = predicates
DEFINES += PREDICATES_LIBRARY

CONFIG += c++17

OBJECTS_DIR = bin

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

macx {
    QMAKE_CXXFLAGS += -stdlib=libc++
}

INCLUDEPATH += headers \

QMAKE_CXXFLAGS = -Wall -O3


SOURCES += \
    Predicates.cpp

HEADERS += \
    Predicates.h




# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
