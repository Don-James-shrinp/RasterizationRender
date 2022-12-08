//
// Created by Lenovo on 2022/11/17.
//

#ifndef RASTERIZATION_VECTOR3F_H
#define RASTERIZATION_VECTOR3F_H
#include "Vector.h"
#include "Vector4f.h"
#include <iostream>

class Vector3f: public Vector
{
    public:
        Vector3f(): x(0), y(0), z(0){}  //  无参构造函数

        Vector3f(float x, float y, float z): x(x), y(y), z(z){}  //  全参构造函数

        Vector3f normalized();  //  返回归一化后的向量，而不对其本身作修改

        void normalize() override;  //  对本身进行归一化

        float dotMultiply(Vector3f &other) const;  //  向量的点乘

        Vector3f crossMultiply(Vector3f &other) const;  // 向量叉乘,返回叉乘的结果向量

        //  只读函数，不对数据成员修改
        [[nodiscard]] float get_x() const override;  //  获取向量的第一维

        [[nodiscard]] float get_y() const override;  //  获取向量的第二维

        [[nodiscard]] float get_z() const override;  //  获取向量的第三维

        float getModulus() override;  //  获取向量的模长

        [[nodiscard]] Vector4f toVector4f() const;  //  将当前的三维向量妆化维四维其次坐标的向量

        friend Vector3f operator- (Vector3f &v1, Vector3f &v2);

        friend std::ostream &operator<< (std::ostream &output, const Vector3f &v);  //  重载流插入运算符

        friend std::istream &operator>> (std::istream &input, Vector3f &v);  //  重载流提取运算符

        friend Vector3f getVec3(Vector3f Start, Vector3f End);  //  根据起始点获取向量Start->End
    private:
        float x,y,z;

};


#endif //RASTERIZATION_VECTOR3F_H
