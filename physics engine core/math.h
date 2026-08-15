#pragma once
#include <cmath> 

template <typename T>
struct Vector3D
{
    T X{};
    T Y{};
    T Z{};
};

template <typename T>
Vector3D<T> VecAdd(const Vector3D<T> &A, const Vector3D<T> &B)
{
    Vector3D<T> result{};
    result.X = A.X + B.X;
    result.Y = A.Y + B.Y;
    result.Z = A.Z + B.Z;
    return result;
}

template <typename T>
Vector3D<T> VecSub(const Vector3D<T> &A, const Vector3D<T> &B)
{
    Vector3D<T> result{};
    result.X = A.X - B.X;
    result.Y = A.Y - B.Y;
    result.Z = A.Z - B.Z;
    return result;
}

template <typename T, typename G>
Vector3D<T> ScalMult(const Vector3D<T> &A, G ScalarVal)
{
    Vector3D<T> result{};
    result.X = A.X * ScalarVal;
    result.Y = A.Y * ScalarVal;
    result.Z = A.Z * ScalarVal;
    return result;
}

template <typename T>
T VecLength(const Vector3D<T> &vector)
{
    return std::sqrt(vector.X * vector.X + vector.Y * vector.Y + vector.Z * vector.Z);
}

template <typename T>
Vector3D<T> VecNorm(const Vector3D<T> &A)
{
    T len{VecLength(A)};
    if (len > 0)
    {
        Vector3D<T> result{};
        result.X = A.X / len;
        result.Y = A.Y / len;
        result.Z = A.Z / len;
        return result;
    }
    return Vector3D<T>{0, 0, 0};
}

template <typename T>
T DotProduct(const Vector3D<T> &A, const Vector3D<T> &B)
{
    return (A.X * B.X) + (A.Y * B.Y) + (A.Z * B.Z);
}

template <typename T>
Vector3D<T> CrossProduct(const Vector3D<T> &A, const Vector3D<T> &B)
{
    Vector3D<T> result{};
    result.X = (A.Y * B.Z) - (A.Z * B.Y);
    result.Y = (A.Z * B.X) - (A.X * B.Z);
    result.Z = (A.X * B.Y) - (A.Y * B.X);
    return result;
}
