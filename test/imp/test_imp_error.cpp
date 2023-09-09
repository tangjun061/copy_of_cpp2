#include <iostream>

#include "gtest/gtest.h"

#include "libimp/error.h"
#include "libimp/result.h"
#include "libimp/fmt.h"

TEST(error, error_code) {
  std::error_code ecode;
  EXPECT_FALSE(ecode);
  std::cout << ecode.message() << "\n";
  EXPECT_EQ(ecode.message(), "Success");
}
