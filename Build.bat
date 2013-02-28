call SetEnv.bat
IF [%CONFIG%]==[] set CONFIG=debug

cd %SRC_DIR%
%QTDIR%\qmake.exe %PROJ% -r -spec win32-g++ 1> %PWD%GeneratingMakefile_%CONFIG%.log 2> %PWD%GeneratingMakefile_%CONFIG%.err
mingw32-make.exe %SRC_DIR% %CONFIG% 1> %PWD%Build_%CONFIG%.log 2> %PWD%Build_%CONFIG%.err
pause