cd %~dp0

if not exist Binaries\ (
    echo.
    echo Please unzip the folder before you can use it.
    echo.
    pause
    exit
)

if not exist Binaries\HexGenerator.exe (
    echo.
    echo Binaries\HexGenerator.exe not found. Did you anti-virus delete it?
    echo.
    pause
    exit
)

start "" Binaries\HexGenerator.exe
