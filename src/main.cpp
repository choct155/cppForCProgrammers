#include <iostream>
#include "sum.h"
#include <vector>

int main() {
    std::cout << "Hello World!!" << std::endl;

    std::vector<int> v;
    
    v.assign (10, 20);
    
    std::vector<int>::iterator it;
    
    std::cout << "This vector is:";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    std::cout << ' ' << *it;
  
    std::vector<int> v2 = {10, 20, 30, 40, 50};
    int v2sum = sum(v2, 0);

    std::cout << v2sum << std::endl;

    return 0;
}