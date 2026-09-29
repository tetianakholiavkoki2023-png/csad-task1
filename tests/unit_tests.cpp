#include <gtest/gtest.h>
#include "../math_operations.h"

TEST(BasicAddition, HandlesPositiveNumbers) {
	EXPECT_EQ(add(2, 3), 5);
}

TEST(BasicAddition, HandlesNegativeNumbers) {
	EXPECT_EQ(add(-2, -3), -5);
}
