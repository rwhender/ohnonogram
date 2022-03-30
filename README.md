# ohnonogram
A C-based nonogram backend

## Build instructions
It's probably easiest to use a CMake plugin for your IDE of choice, but barring that, these commands should get things built using a Unix Makefile generator with a Debug configuration:
1. `cmake --no-warn-unused-cli -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_C_COMPILER:FILEPATH=<path-to-gcc> -DCMAKE_CXX_COMPILER:FILEPATH=<path-to-g++> -S<path-to-ohnonogram>/ -B<path-to-ohnonogram>/build -G "Unix Makefiles"`
2. `cmake --build <path-to-ohnonogram>/build --config Debug --target ohnonogram`

## Running the executable
In your terminal, with the ohnonogram project directory as your current directory, run
```
build/ohnonogram
```
