QT += quick

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        SingletonApplication.cpp \
        base/base.cpp \
        interface/input.cpp \
        main.cpp \
        server/logic.cpp \
        server/network.cpp \
        server/table_utg_sh.cpp \
        server/top_20_starting_hands.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    SingletonApplication.h \
    base/base.h \
    interface/input.h \
    server/logic.h \
    server/network.h \
    server/table_utg_sh.h \
    server/top_20_starting_hands.h
