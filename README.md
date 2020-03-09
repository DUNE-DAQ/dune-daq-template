cmake-boost-demo
================

This repository provides a template package for DUNE DAQ using the CMake
cross-platform compiler and the Boost unit testing framework.

The directory structure is provided below:

```
.
├── CMakeLists.txt
├── doc
├── dune-daq-template
│   ├── Bar.cpp
│   ├── Bar.hpp
│   ├── .clang-format
│   ├── Foo.cpp
│   ├── Foo.hpp
│   └── main.cpp
├── .gitignore
├── README.md
├── test
│   └── CMakeLists.txt
└── unittest
    ├── CMakeLists.txt
    ├── test_bar.cpp
    ├── test_foo.cpp
    └── test_main.cpp

```

## Dependencies

This project was built and tested with 

* CMake >= 3.5
* Boost >= 1.61

using either clang or gcc.

## Instructions

Do as you would any CMake project to compile:

```
mkdir build
cd build
cmake ..
make
```

Run application:

```
./dune-daq-template
```

Run unit test suite:

```
cd unittest
ctest
```

## References

* [CMake: An introduction](https://www.cs.swarthmore.edu/~adanner/tips/cmake.php)
* [CMake/Testing with CTest](https://cmake.org/Wiki/CMake/Testing_With_CTest)
* [Get to know the Boost unit test framework](http://www.ibm.com/developerworks/aix/library/au-ctools1_boost/index.html)
