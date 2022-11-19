cmake_minimum_required(VERSION 3.23)
project(Rasterization)

set(CMAKE_CXX_STANDARD 20)
set(SRC_LIST main.cpp Matrix3f.h Matrix3f.cpp Vector3f.cpp Vector3f.h Vector4f.h Vector4f.cpp)
add_executable(Rasterization ${SRC_LIST})
