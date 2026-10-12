#pragma once
#include <array>
#include <iostream>
#include <stdexcept>

constexpr int n = 3;

class Vector{
public:
    double v[n];

    //constructors
    Vector();
    Vector(const double arr[n]);

    //element access
    double& operator[](int i) { return v[i]; }
    const double& operator[](int i) const { return v[i]; }

    //operator section

    //addition
    Vector operator+(const Vector &other) const;

    //dot product
    double operator*(const Vector &other) const;

    void display() const;
};

using Matrix = std::array<Vector,n>;

//scalar-Vector product
Vector operator*(double k, const Vector &v);

//matrix-Vector product
Vector operator*(const Matrix &M, const Vector &v);
