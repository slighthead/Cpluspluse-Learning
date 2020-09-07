#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

#include <array> // use -std=c++11 to debugging, right now not use it's okay.

using std::cout;
using std::cin;


void print_array(std::array<int, 20> );

int main()
{
    std::array<int,20> data = {1, 2, 3};
    
    cout << data[3] << std::endl;
    
    
    print_array(data);
    
    return 0;
}

void print_array(std::array<int,20> data)
{
    for(int i =0; i <data.size(); i++)
    {
        cout << data[i] << "\t";
    }
    cout << "\n";
}

