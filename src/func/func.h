#pragma once
#include <string>

#include "util.h"

namespace func {
class Test {
   public:
    Test() = default;
    void test_func(std::string s);

   private:
    int a;
};
}  // namespace func