QT       += core gui
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    enemy1.cpp \
    enemy2.cpp \
    enemy3.cpp \
    gameview.cpp \
    gamewidget.cpp \
    main.cpp \
    qpixmapitem.cpp \
    weapon1.cpp \
    weapon2.cpp \
    widget.cpp

HEADERS += \
    enemy1.h \
    enemy2.h \
    enemy3.h \
    gameview.h \
    gamewidget.h \
    qpixmapitem.h \
    weapon1.h \
    weapon2.h \
    widget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
