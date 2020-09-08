#ifndef MATH_UTILS
#define MATH_UTILS

struct Rec
{
    double length;
    double width;
};

namespace utils
{
    double area (double l, double w);
    double area (double l);
    double area (Rec rec);

    double pow (double b, int p =2);
}


#endif