cmake_minimum_required(VERSION 3.23)
project(Rasterization)

set(CMAKE_CXX_STANDARD 20)
set(SOURCES
        src/main.cpp
        src/Vector4f.cpp
        src/Vector3f.cpp
        src/Matrix3f.cpp
        src/Triangle.cpp
)

add_executable(Rasterization ${SOURCES})
target_include_directories(Rasterization PRIVATE ${PROJECT_SOURCE_DIR}/include)
