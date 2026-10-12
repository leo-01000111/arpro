#include"Vector.h"
using namespace std;

//constructor
Vector(double arr[n]){
    v = arr;
}

//operator section

//addition
Vector Vector::operator+(const Vector &v1, const Vector &v2)
{
    int v1_len = n;
    int v2_len = n;

    if(v1_len != v2_len){
        throw runtime_error("Vector length mismatch");
    }

    double v[n];

    for(int i = 0; i < v1_len; i++){
        v[i] = v1[i]+v2[i];
    }
    return Vector(v);
}

//dot product
double Vector::operator*(const Vector &v1, const Vector &v2)
{
    int v1_len = n;
    int v2_len = n;

    if(v1_len != v2_len){
        throw runtime_error("Vector length mismatch");
    }

    double k = 0;

    for(int i = 0; i < v1_len; i++){
        k+=v1[i]*v2[i];
    }

    return k;
}

//scalar-Vector product
Vector Vector::operator*(double k, const Vector &v)
{
    int v_len = n;
    Vector result();
    for(int i = 0; i < v_len; i++){
        result.v[i]=k*v.v[i];
    }
    return result; //
}

// //matrix-Vector product
// Vector Vector::operator*(const Matrix &M, const Vector &v)
// {
//     int v_len = sizeof(v)/sizeof(v[0]);
//     double result[v_len] = { };//all zeroes

//     int n = matrix[0].size();
//     if(v_len != n){
//         throw runtype_error("Vector length mismatch");
//     }

//     //TODO find matrix side (correct one) and compare with v_len
//     //assuming matrix is k x m where k is number of collumns
//     // and m is the number of rows

//     //FUCK THAT SHIT ITS A SQUARE MATRIX

//     for(int i = 0; i<n; i++)
//     {
//         for(int j = 0; j<n; j++)
//         {
//             result[i] += M[i][j]*v[j];
//         }
//     }
//     return Vector(result);
// }

void Vector::display() const {
    for (int i = 0; i < n; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}
