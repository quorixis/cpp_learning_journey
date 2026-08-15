#pragma once
#include "math.h"

enum class Mode
{
    Static,
    Dynamic,
    Kinematic,
};

enum class Material
{
    Wood,
    Metal,
    Rubber,
    Ice,
    Custom,
};

template <typename T>
struct MaterialProperties
{
    T bounciness{};
    T surfaceResistance{};
    T density{};
};

template <typename T>
struct location_size
{
    Vector3D<T> location{};
    Vector3D<T> size{};
};

template <typename T>
struct Body
{
    location_size<T> location_size{};
    Vector3D<T> speed{};
    Vector3D<T> acceleration{};
    Vector3D<T> totalForce{};
    T mass{};
    T inverseMass{};
    MaterialProperties<T> properties{};
    Mode mode{};
    Material material{};
};
