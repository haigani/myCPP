#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTet, Addition){
	EXPECT_EQ(add(1,3),4);
}
