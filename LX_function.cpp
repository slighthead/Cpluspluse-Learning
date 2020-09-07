#include <iostream>
#include <cmath>

using std::cout;
using std::cin;


double power (double , int ); // declaration
void print_pow(double, int);

int main()
{
    int base, exponent;
    cout << "What is the base?:"<<std::endl; 
    cin >> base;
    cout << "The exponent?:"<<std::endl;
    cin >> exponent;

    double power_r = pow(base,exponent);
    cout << power_r << std::endl;

    cout << power(base, exponent)<< std::endl; 

    print_pow(base,exponent);

    return 0;
}

// function definition
double power (double base, int exponent)
{
    double result = 1;
    for (int  i = 0; i< exponent; i++)
    {
        result  = result * base;
    }
    
    
    return result;
}


void print_pow (double base, int exponent)
{
    double myPower  = power(base,exponent);
    cout << "print_pow shows: " << myPower << std::endl;
}