#include <iostream>
#include <string>
using std::cout;
using std::cin;


template <typename T>
void swap (T &a, T &b)
{
    int temp = a;
    a = b;
    b = temp;

}
template <typename T>
void swap ( T a[], T b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }


}



// void swap (std::string &, std::string &);
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

    int nines[] = {9,9,9,9,9};
    int ones[] = {1,1,1,1,1};

    swap(nines,ones, 5);

    for (int i = 0; i<5 ; i++)
    {
        cout << nines[i] << "\t" << ones[i] << std::endl;
    }


    return 0;
}
