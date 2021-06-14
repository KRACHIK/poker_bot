SET DEPLOY_UTIL=C:\Qt\5.9.9\msvc2015\bin\windeployqt.exe
SET QML_DIR=D:\dev\poker_bot
SET BIN_EXE=D:\dev\build-poker_bot-Desktop_Qt_5_9_9_MSVC2015_32bit-Release\release
%DEPLOY_UTIL% --qmldir %QML_DIR% %BIN_EXE%