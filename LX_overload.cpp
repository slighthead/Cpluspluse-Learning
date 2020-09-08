#include <iostream>

using std::cout;

struct Rec
{
    double length;
    double width;
};

double area (double,double);
double area (double);
double area (Rec);

// double pow (double, int); the declaration first with default value is not working.

double pow(double b, int p =2) // p has a default value
{
    int total = 1;
    for (int i = 0; i<p; i++)
    {
        total *= b;
    }
    return total;
}

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

double area (double l, double w)
{
    return l*w;
}
double area(double l)
{
    return l*l;
}
double area (Rec rec)
{
    return rec.length*rec.width;
}


