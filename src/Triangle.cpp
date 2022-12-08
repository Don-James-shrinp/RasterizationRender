//
// Created by Lenovo on 2022/12/8.
//

#include "Triangle.h"
#include "Vector3f.h"

Vector3f Triangle::getNormalVector()
{
    return AB.crossMultiply(BC);
}

float Triangle::getArea()  //  利用 S = a * b * sinb * 0.5 求三角形面积
{
    return AB.crossMultiply(BC).getModulus() * 0.5f;
}

Vector3f Triangle::a() const
{
    return A;
}

Vector3f Triangle::b() const
{
    return B;
}

Vector3f Triangle::c() const
{
    return C;
}

Vector3f Triangle::ab() const
{
    return AB;
}

Vector3f Triangle::bc() const
{
    return BC;
}

Vector3f Triangle::ca() const
{
    return CA;
}