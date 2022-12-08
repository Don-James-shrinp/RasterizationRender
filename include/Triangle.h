//
// Created by Lenovo on 2022/12/8.
//

#ifndef RASTERIZATION_TRIANGLE_H
#define RASTERIZATION_TRIANGLE_H
#include <Vector3f.h>

class Triangle
{
    public:
    Triangle():A(), B(), C(), AB(), BC(), CA() {}  //  �޲ι��캯��

    Triangle(Vector3f a, Vector3f b, Vector3f c): A(std::move(a)), B(std::move(b)), C(std::move(c)), AB(b - a), BC(c - a), CA(a - c){}

    Vector3f getNormalVector();  //  ��ȡ�����εķ�����

    float getArea();  //  ��ȡ�����ε����

    [[nodiscard]] Vector3f a() const;  //  ��ȡ����A

    [[nodiscard]] Vector3f b() const;  //  ��ȡ����B

    [[nodiscard]] Vector3f c() const;  //  ��ȡ����C

    [[nodiscard]] Vector3f ab() const;  //  ��ȡ����AB

    [[nodiscard]] Vector3f bc() const;  //  ��ȡ����BC

    [[nodiscard]] Vector3f ca() const;  //  ��ȡ����CA

    private:
    Vector3f A, B, C;  //  �����ε���������(�����˳������ʱ�뷽�����)

    Vector3f AB, BC, CA;  //  �����������߹��ɵ�����
};


#endif //RASTERIZATION_TRIANGLE_H
