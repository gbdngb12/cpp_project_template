#include "func.h"
#include "util.h"
#include <iostream>

using namespace std;

int main() {
    func::Test test_object{};
    test_object.test_func(std::string{"Hello World"});
    cout << "Hello World\n" << endl;
    return 0;
}