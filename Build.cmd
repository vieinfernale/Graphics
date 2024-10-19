@echo off
:: Set PROJECT_DIRECTORY to the current directory of the batch file
:: %~dp0 : permanent directory containing the batch script.
:: %cd% : current working directory of the Command Prompt session at the time of execution.
set PROJECT_DIRECTORY=%~dp0

g++ Main.cpp -o Main ^
-I"%PROJECT_DIRECTORY%/include"
:: -L"%PROJECT_DIRECTORY%/lib" ^
:: -llibname

pause
:: Script to Compile & Run the C++ file