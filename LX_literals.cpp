#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main()
{
    // quoted constant
    // "c" string
    // 'c' character

    // unicode

    // auto is specifier is a c++11 extention 
    // when compile, add ' -std=c++11'
    //auto x = 5U;// unsigned UL:unsigned long F: float

    // Hex: 16 0~F and Octal: 8 0~7

    int number  = 30;
    cout<< number << std::endl;
    cout<<std::hex<< number << std::endl;
    cout<<std::oct<< number << std::endl;
    number  = 0X30; // hex 
    cout<< number << std::endl;
    number = 030; // oct
    cout<< number << std::endl;


    return 0;
}