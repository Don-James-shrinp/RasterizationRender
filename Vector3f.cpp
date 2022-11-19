//
// Created by Lenovo on 2022/11/17.
//

#include "Vector3f.h"
#include <iostream>
#include <cmath>
void Vector3f::normalize()
{
    float Modulus = getModulus();
    x /= Modulus;
    y /= Modulus;
    z /= Modulus;
}

Vector3f Vector3f::normalized()
{
    float Modulus = getModulus();
    return {x / Modulus, y / Modulus, z / Modulus};
}

float Vector3f::dotMultiply(Vector3f other)
{
    return x * other.x + y * other.y + z * other.z;
}

Vector3f Vector3f::crossMultiply(Vector3f other)
{
    return {y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x};
}

float Vector3f::get_x() const
{
    return x;
}

float Vector3f::get_y() const
{
    return y;
}

float Vector3f::get_z() const
{
    return z;
}

float Vector3f::getModulus()
{
    return std::sqrt(x * x + y * y + z * z);
}


std::ostream &operator<<(std::ostream &output, const Vector3f &v)
{
    output << "(" << v.x << "," << v.y << "," << v.z << ")";
    return output;
}

std::istream &operator>>(std::istream &input, Vector3f &v)
{
    input >> v.x >> v.y >> v.z;
    return input;
}





