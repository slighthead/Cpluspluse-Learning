#include <iostream>
#include <string>
using std::cout;
using std::cin;

void swap (int &, int &);
void swap (std::string &, std::string &);
int main()
{
    int a = 10;
    int b = 20;

    swap(a,b);
    cout << "a = "<< a<< std::endl;
    cout << "b = "<< b<< std::endl;

    std::string first = "first";
    std::string second = "second";
    swap(first, second);
    cout << "the first is:" << first<< std::endl;
    cout << "the second is:" << second<< std::endl;

    return 0;
}

void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}
void swap (std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;

}