#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<time.h>
#include"Vector.h"
#include <stdexcept>

// double f(Vector x)
// {
//     Vector v1(Q*x);
//     Vector v2(x*v2);
//     Vector v3(r*x);
//     Vector result = v2+v3;
//     //return result[0];
// }


// double minimize(double (*fprim)(double), double x0, int max_iter, double lambda, double gm){
//     int i = 0;
//     double g = 2*gm;
//     double x = x0;
//     while(i<max_iter && abs(g)>gm){
//         g = fprim(x);
//         x = x - lambda*g;
//         i++;
//     }
//     return x;
// }

//using Matrix = std::array<Vector,n>;

int main(){
    double arr1[3] = {1., 2., 3.};
    Vector v1(arr1);
    Matrix M1({v1, v1, v1});
    (M1*v1).display();
    return 0;
}