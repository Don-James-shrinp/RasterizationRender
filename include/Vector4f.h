//
// Created by Lenovo on 2022/11/19.
//

#ifndef RASTERIZATION_VECTOR4F_H
#define RASTERIZATION_VECTOR4F_H
#include "Vector.h"
#include <iostream>

class Vector4f: public Vector
{
    public:
        Vector4f(): x(0), y(0), z(0), w(0) {};

        Vector4f(float x, float y, float z, float w): x(x), y(y), z(z), w(w) {};

        [[nodiscard]] float get_x() const override;

        [[nodiscard]] float get_y() const override;

        [[nodiscard]] float get_z() const override;

        [[nodiscard]] float get_w() const;

        float getModulus() override;

        void normalize() override;

        Vector4f normalized();

        friend std::ostream &operator<<(std::ostream &output, const Vector4f &v);

        friend std::istream &operator>>(std::istream &input, Vector4f &v);

    private:
        float x, y, z, w;
};


#endif //RASTERIZATION_VECTOR4F_H
