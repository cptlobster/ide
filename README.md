# ide project (TODO: come up with catchy name)
C++ based IDE designed with all standard features of modern popular IDEs (i.e. JetBrains Suite, VSCode) while providing
universal language support and better performance

# Installation
To install/run the following is required:
 - CMake >= 3.12
 - Your preferred buildtools for your OS (MSVC, MinGW, GCC, make, ninja, etc.)

Use CMake to generate build instructions and pull dependencies

```bash
TODO: add command
```

Then use your preferred build tool to execute the build

*Note: For `make` users (on Linux), `-j` flag is recommended as it multithreads your build operation, for example
`make -j4` uses 4 threads instead of the default 1. This speeds up the build process considerably.*