#include <iostream>
#include "math_utils.h"
using std::cout;


// double pow (double, int); the declaration first with default value is not working.



int main()
{
    Rec rectang;
    rectang.length = 5.0;
    rectang.width = 4.0;

    cout << "The area is: "<<std::endl;
    cout << utils::area(rectang.length,rectang.width)<< std::endl;
    cout << utils::area(rectang.width)<< "(square)"<<std::endl;
    cout << utils::area(rectang) << std::endl;
    
    cout << "The 3 with power 7 is:"<< std::endl;
    cout << utils::pow(3.0)<< std::endl;

    return 0;
}



