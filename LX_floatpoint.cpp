#include <iostream>
#include <cmath>
#include <float.h>

using std::cout;
using std::cin;


int main()
{
    float a = 10.0/3;
    double b = 77000; // 7.7E4
    long double c;
    cout<< std::fixed << a << std::endl;

    cout << FLT_DIG << std::endl;
    cout<< DBL_DIG << std::endl;
    cout<< LDBL_DIG << std::endl;

    return 0;
}