# Algorithms Analyzer
A program that analyzes number of operations of various algoritms.

## Build
```shell
mkdir build && cd build
cmake .. # "-UBUILD_TESTS -DBUILD_TESTS=ON" to build tests, "-ULIBRARY_TYPE -DLIBRARY_TYPE=SHARED" for building shared library
make
```

## How to use
```shell
cd build
./algo-analyzer
```

## Build documentation
```shell
doxygen
```
Documentation will be generated in the directory named `docs`.
