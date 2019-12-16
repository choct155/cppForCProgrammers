#include <iostream>
#include "sum.h"
#include <vector>

int main() {
    std::cout << "Hello World!!" << std::endl;

    std::vector<int> v;
    v = {10,20,30};

    for (auto const& c : v)
    std::cout << c << ' ';

    return 0;
}