//
// Created by Lenovo on 2022/11/19.
//

#include "Vector4f.h"
#include <cmath>

float Vector4f::get_x() const
{
    return x;
}

float Vector4f::get_y() const
{
    return y;
}

float Vector4f::get_z() const
{
    return z;
}

float Vector4f::get_w() const
{
    return w;
}

float Vector4f::getModulus()
{
    return std::sqrt(x * x + y * y + z * z + w * w);
}

void Vector4f::normalize()
{
    float Modulus = getModulus();
    x /= Modulus;
    y /= Modulus;
    z /= Modulus;
    w /= Modulus;
}

Vector4f Vector4f::normalized()
{
    float Modulus = getModulus();
    return {x / Modulus, y / Modulus, z / Modulus, w / Modulus};
}

std::ostream &operator<<(std::ostream &output, const Vector4f &v)
{
    output << "(" << v.x << "," << v.y << "," << v.z << "," << v.w << ")";
    return output;
}

std::istream &operator>>(std::istream &input, Vector4f &v)
{
    input >> v.x >> v.y >> v.z >> v.w;
    return input;
}