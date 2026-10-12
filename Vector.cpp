#include "Vector.h"

//constructors
Vector::Vector(){
    for(int i = 0; i < n; i++){
        v[i] = 0;
    }
}

Vector::Vector(const double arr[n]){
    for(int i = 0; i < n; i++){
        v[i] = arr[i];
    }
}

//operator section

//addition
Vector Vector::operator+(const Vector &other) const
{
    Vector result;
    for(int i = 0; i < n; i++){
        result.v[i] = v[i] + other.v[i];
    }
    return result;
}

//dot product
double Vector::operator*(const Vector &other) const
{
    double k = 0;
    for(int i = 0; i < n; i++){
        k += v[i] * other.v[i];
    }
    return k;
}

//scalar-Vector product
Vector operator*(double k, const Vector &v)
{
    Vector result;
    for(int i = 0; i < n; i++){
        result.v[i] = k * v.v[i];
    }
    return result;
}

//matrix-Vector product (square matrix, each element of M is a row)
Vector operator*(const Matrix &M, const Vector &v)
{
    Vector result;
    for(int i = 0; i < n; i++){
        result.v[i] = M[i] * v;
    }
    return result;
}

void Vector::display() const {
    for (int i = 0; i < n; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}
