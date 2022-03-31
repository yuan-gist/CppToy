#include "gtest/gtest.h"
#include "tools.h"

TEST(TestModule, Add){
    EXPECT_EQ(3,    add(1,2));
    EXPECT_EQ(0,   add(-1,1));
    EXPECT_EQ(1,   add(-1,2));
    EXPECT_EQ(-2, add(-1,-1));
    EXPECT_EQ(-1,  add(-1,0));
}