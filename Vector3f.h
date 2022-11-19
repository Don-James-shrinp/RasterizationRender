//
// Created by Lenovo on 2022/11/17.
//

#ifndef RASTERIZATION_VECTOR3F_H
#define RASTERIZATION_VECTOR3F_H

#include "Matrix3f.h"
#include <iostream>
class Vector3f {
public:
    Vector3f(): x(0), y(0), z(0){}  //  无参构造函数

    Vector3f(float x, float y, float z): x(x), y(y), z(z){}  //  全参构造函数

    Vector3f normalized();  //  返回归一化后的向量，而不对其本身作修改

    void normalize();  //  对本身进行归一化

    float dotMultiply(Vector3f other);  //  向量的点乘

    Vector3f crossMultiply(Vector3f other);  // 向量叉乘,返回叉乘的结果向量

    //  只读函数，不对数据成员修改
    float get_x() const;  //  获取向量的第一维

    float get_y() const;  //  获取向量的第二维

    float get_z() const;  //  获取向量的第三维

    float getModulus();  //  获取向量的模长

    friend std::ostream &operator<< (std::ostream &output, const Vector3f &v);  //  重载流插入运算符

    friend std::istream &operator>> (std::istream &input, Vector3f &v);  //  重载流提取运算符

private:
    float x,y,z;

};


#endif //RASTERIZATION_VECTOR3F_H
