set PWD=%~dp0
set CONFIG=clean
set OUT_DIR=%PWD%clean
call Build.bat
rmdir %OUT_DIR%