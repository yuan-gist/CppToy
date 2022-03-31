# version (Mandatory)
cmake_minimum_required(VERSION 3.0)

# project name (Mandatory)
project(mySmallProject)

# tell cmake to output binary, library here
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH    ${PROJECT_SOURCE_DIR}/lib)

message(STATUS "** ${PROJECT_SOURCE_DIR} **")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/include)

# tell cmake to add a subdirectory
# a CMakeLists.txt should exist in this subdirectory
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
