#include <gtest/gtest.h>

#include "func.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
    func::Test test_object{};
    test_object.test_func(std::string{"Hello World"});
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}
