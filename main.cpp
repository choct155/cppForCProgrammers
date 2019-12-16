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
  
    return 0;
}