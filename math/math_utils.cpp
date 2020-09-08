#include "math_utils.h"


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

double pow(double b, int p) // p has a default value
{
    int total = 1;
    for (int i = 0; i<p; i++)
    {
        total *= b;
    }
    return total;
}