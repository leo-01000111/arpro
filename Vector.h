#include <stdexcept>
#include <array>
using namespace std;

const int n = 3;
class Vector;
using Matrix = std::array<Vector,n>;


class Vector{
public:
    double v[n];

    //constructor
    Vector(){}
    Vector(double arr[n]);

    //operator section

    //addition
    Vector operator+(const Vector &v1);

    //dot product
    Vector operator*(const Vector &v1);

    //scalar-Vector product
    Vector operator*(double k);


    void display();
};

using Matrix = std::array<Vector,n>;

//matrix-Vector product
Vector operator*(Matrix &M, const Vector &v){
    Vector result;

    for(int i = 0; i<n; i++)
    {
        result.v[i] = (M[i] * v).v[0];
    }
    return result;
}
