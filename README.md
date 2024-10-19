# Environment

## Languages
- C++
- [Python](https://www.python.org/downloads/)
- [Batch](https://ss64.com/nt/)
- [Bash](https://help.ubuntu.com/community/Beginners/BashScripting) (Linux / Ubuntu)

## IDE and Compiler
- [Visual Studio](https://visualstudio.microsoft.com/)
- [Visual Studio Code](https://code.visualstudio.com/)
- [Visual Studio C++](https://learn.microsoft.com/en-us/cpp/)
- [Mingw-w64](https://www.mingw-w64.org/downloads/)
- [GCC](https://gcc.gnu.org/) (Linux / Ubuntu)

## Libraries
- [C++ STL](https://cppreference.com)
- [Python STL](https://docs.python.org/3/library/)

## Headers
### Include specific headers from a library
```cpp
// #include <Vectors/Vectors.h>
#ifndef VECTORS_H
#define VECTORS_H

// Include specific headers
#include <Vectors/Vector2D.h>
#include <Vectors/Vector3D.h>

#endif
```

## Debug
### Batch (.cmd)
```bash
g++ Main.cpp -o Main -I"%PROJECT_DIRECTORY%/include"
```
```bash
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
```