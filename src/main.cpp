#include <iostream>
#include "../include/Vector3f.h"

int main() {
    Vector3f v1(2,2,2), v2(2,3,1);
    std::cout << v1.dotMultiply(v2) << std::endl;
    std::cout << v1.crossMultiply(v2) << std::endl;
    std::cout << v1.normalized() << std::endl;
    return 0;
}
