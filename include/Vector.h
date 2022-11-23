//
// Created by Lenovo on 2022/11/23.
//

#ifndef RASTERIZATION_VECTOR_H
#define RASTERIZATION_VECTOR_H
class Vector  //  抽象基类Vector，Vector3f和Vector4f都继承自该抽象基类
{
    public:
        virtual float get_x() const = 0;  //  获得向量的第一维

        virtual float get_y() const = 0;  //  获取向量的第二维

        virtual float get_z() const = 0;  //  获取向量的第三维

        virtual float getModulus() = 0;  //  获取向量的模长

        virtual void normalize() = 0;  //  对向量自身进行归一化

};
#endif //RASTERIZATION_VECTOR_H
