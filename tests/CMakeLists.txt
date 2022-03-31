# Now simply link against gtest or gtest_main as needed. Eg
add_executable( runUnitTests example.cpp 
                             test_add.cpp)
target_link_libraries(runUnitTests gtest_main tools)  # tools library must be added
add_test(NAME runUnitTests COMMAND runUnitTests)
