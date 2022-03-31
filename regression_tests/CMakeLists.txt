# Now simply link against gtest or gtest_main as needed. Eg
add_executable( runUnitTests example.cpp )
target_link_libraries(runUnitTests gtest_main)
add_test(NAME runUnitTests COMMAND runUnitTests)
