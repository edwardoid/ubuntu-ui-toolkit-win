set PWD=%~dp0
set DEPS_DIR=%PWD%deps
set SRC_DIR=%PWD%src
set OUT_DIR=%PWD%bin
mkdir %OUT_DIR%
set PROJ=%SRC_DIR%\ubuntu-sdk.pro
set QC_BIN=C:\Qt\Qt5.0.1\Tools\QtCreator\bin\qtcreator.exe
%QC_BIN% %PROJ%
