CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ShortcutProvider.cpp \
    main.cpp 

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    ShortcutProvider.h

win32: LIBS += -L'C:/Program Files (x86)/Windows Kits/10/Lib/10.0.19041.0/um/x86/' -lOle32

INCLUDEPATH += 'C:/Program Files (x86)/Windows Kits/10/Lib/10.0.19041.0/um/x86'
DEPENDPATH += 'C:/Program Files (x86)/Windows Kits/10/Lib/10.0.19041.0/um/x86'
