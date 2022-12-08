//
// Created by Lenovo on 2022/12/8.
//

#ifndef RASTERIZATION_TRIANGLE_H
#define RASTERIZATION_TRIANGLE_H
#include <Vector3f.h>

class Triangle
{
    public:
    Triangle():A(), B(), C(), AB(), BC(), CA() {}  //  无参构造函数

    Triangle(Vector3f a, Vector3f b, Vector3f c): A(std::move(a)), B(std::move(b)), C(std::move(c)), AB(b - a), BC(c - a), CA(a - c){}

    Vector3f getNormalVector();  //  获取三角形的法向量

    float getArea();  //  获取三角形的面积

    [[nodiscard]] Vector3f a() const;  //  获取顶点A

    [[nodiscard]] Vector3f b() const;  //  获取顶点B

    [[nodiscard]] Vector3f c() const;  //  获取顶点C

    [[nodiscard]] Vector3f ab() const;  //  获取向量AB

    [[nodiscard]] Vector3f bc() const;  //  获取向量BC

    [[nodiscard]] Vector3f ca() const;  //  获取向量CA

    private:
    Vector3f A, B, C;  //  三角形的三个顶点(三点的顺序按照逆时针方向给出)

    Vector3f AB, BC, CA;  //  三角形三条边构成的向量
};


#endif //RASTERIZATION_TRIANGLE_H
