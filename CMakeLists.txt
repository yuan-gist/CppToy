# version (Mandatory)
cmake_minimum_required(VERSION 3.0)

# project name (Mandatory)
project(mySmallProject)

# tell cmake to output binary, library here
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH    ${PROJECT_SOURCE_DIR}/build/lib)

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/headers)

# tell cmake to add a subdirectory
# a CMakeLists.txt must exist in this subdirectory
add_subdirectory(${PROJECT_SOURCE_DIR}/src)

message(STATUS " ")
message(STATUS "========================================================")
message(STATUS "========================================================")
message(STATUS "ProjectDir: ${PROJECT_SOURCE_DIR}")
message(STATUS "generated binary 'main'  in build/bin       (after make)")
message(STATUS "generated libraries      in build/lib       (after make)")
message(STATUS "========================================================")
message(STATUS "========================================================")
message(STATUS " ")
