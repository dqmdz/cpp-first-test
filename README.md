
# First Testing Project in C++  
This is an example to use GTest  

## Run Locally  
make new directory to project

###  :file_folder: File Structure
```
.
├── build/
├── ext/
├── include/
├── src/
├── .gitignore
├── CMakeLists.txt
└── README.md
```

Go to ext/ directory and clone GTest
~~~bash
  cd ext
  git clone --depth=1 https://github.com/google/googletest.git
~~~

Use this CMakeLists.txt template

~~~bash  
cmake_minimum_required(VERSION 3.5)
project(modio)
set (CMAKE_CXX_STANDARD 11)

IF( test AND test STREQUAL "on" )
  message("Testing enabled")
  file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
  add_subdirectory(ext/googletest)
  enable_testing()
  include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
  add_executable(runUnitTests ${TEST_SRC_FILES})
  target_link_libraries(runUnitTests gtest gtest_main)
  add_test(UnitTests runUnitTests)
ENDIF()
~~~

### Steps to test
Build project
~~~bash  
  cd build
  cmake .. -Dtest=on
  make -j8
~~~

Run test
~~~bash  
  make test
~~~

Run verbose test
~~~bash  
  ctest --verbose
~~~

Thanks to Ahmed Castro (https://youtu.be/-kQQX9UB21c?si=3Ju_ctXftOzYV1qW)