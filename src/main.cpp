#include <iostream>
#include "Vector3f.h"
#include <Triangle.h>

int main()
{
    Vector3f v1(2,0,0), v2(0,2,0), v3(0,0,0);
    Triangle triangle{v1, v2, v3};
//    std::cout << v1.dotMultiply(v2) << std::endl;
//    std::cout << v1.crossMultiply(v2) << std::endl;
//    std::cout << v1.normalized() << std::endl;
//    std::cout << v1 - v2 << std::endl;
    std::cout << triangle.getArea() << std::endl;
    return 0;
}
