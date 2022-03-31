# version (Mandatory)
cmake_minimum_required(VERSION 3.14)

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

# google test
# is googletest already defined and built
if(NOT googletest)
  include(FetchContent)
  FetchContent_Declare(
    googletest
    # Specify the commit you depend on and update it regularly.
    URL https://github.com/google/googletest/archive/refs/heads/main.zip
  )
  # For Windows: Prevent overriding the parent project's compiler/linker settings
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(googletest)
endif()
# tell cmake where to find test
add_subdirectory(${PROJECT_SOURCE_DIR}/regression_tests)

# # Now simply link against gtest or gtest_main as needed. Eg
# add_executable( runUnitTests example.cpp )
# target_link_libraries(runUnitTests gtest_main)
# add_test(NAME runUnitTests COMMAND runUnitTests)

message(STATUS " ")
message(STATUS "========================================================")
message(STATUS "========================================================")
message(STATUS "ProjectDir: ${PROJECT_SOURCE_DIR}")
message(STATUS "generated binary 'main'  in build/bin       (after make)")
message(STATUS "generated libraries      in build/lib       (after make)")
message(STATUS "========================================================")
message(STATUS "========================================================")
message(STATUS " ")
