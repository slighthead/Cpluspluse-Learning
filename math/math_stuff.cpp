#include <iostream>
#include "math_utils.h"
using std::cout;



// for windows setting, in order to get the "make" as linux, pls type "mingw32-make"


int main()
{
    Rec rectang;
    rectang.length = 5.0;
    rectang.width = 4.0;

    cout << "The area is: "<<std::endl;
    cout << area(rectang.length,rectang.width)<< std::endl;
    cout << area(rectang.width)<< "(square)"<<std::endl;
    cout << area(rectang) << std::endl;
    
    cout << "The 3 with power 7 is:"<< std::endl;
    cout << pow(3.0)<< std::endl;

    return 0;
}



