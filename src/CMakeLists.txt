# compiler
set(CMAKE_CXX_STANDARD 11) # Use C++11
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# create library "tools"
add_library(tools       say_hello.cpp add.cpp)
add_library(bla         bla.cpp)
add_library(cv          OpenCV/DisplayImage.cpp)

# add executable main
add_executable(main main.cpp)

# tell the linker to bind these objects together
target_link_libraries(main tools
                           bla
                           ${OpenCV_LIBS}
                           cv)
