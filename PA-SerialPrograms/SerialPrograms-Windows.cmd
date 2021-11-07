cd %~dp0

if not exist Binaries64\ (
    echo.
    echo Please unzip the folder before you can use it.
    echo.
    pause
    exit
)

if not exist Binaries64\SerialPrograms.exe (
    echo.
    echo Binaries\SerialPrograms.exe not found. Did you anti-virus delete it?
    echo.
    pause
    exit
)

start "" Binaries64\SerialPrograms.exe
