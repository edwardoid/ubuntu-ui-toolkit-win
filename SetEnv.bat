set PWD=%~dp0
set DEPS_DIR=%PWD%deps
set SRC_DIR=%PWD%src
IF [%OUT_DIR%]==[] set OUT_DIR=%PWD%bin

set UTILS_DIR=%PWD%utils
mkdir %OUT_DIR%
set PROJ=%SRC_DIR%\ubuntu-sdk.pro
set QML_IMPORT_PATH=%OUT_DIR%;%QML_IMPORT_PATH%
set QML2_IMPORT_PATH==%OUT_DIR%;%QML2_IMPORT_PATH%
set QML_IMPORT_TRACE=1
set QC_BIN=C:\Qt\Qt5.0.1\Tools\QtCreator\bin\qtcreator.exe
set QTDIR=C:\Qt\Qt5.0.1\5.0.1\mingw47_32\bin
set MINGW_DIR=C:\Qt\Qt5.0.1\Tools\MinGW\bin
set PATH=%UTILS_DIR%;%QTDIR%;%MINGW_DIR%