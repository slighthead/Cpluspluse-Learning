#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

#include <vector> // use -std=c++11 to debugging, right now not use it's okay.

using std::cout;
using std::cin;


void print_vector(std::vector<int> );

int main()
{
    std::vector<int> data = {1, 2, 3};
    data.push_back(12); // append one item
    cout << data[3] << std::endl;
    data.pop_back(); // delete last item
    
    print_vector(data);
    
    return 0;
}

void print_vector(std::vector<int> data)
{
    for(int i =0; i <data.size(); i++)
    {
        cout << data[i] << "\t";
    }
    cout << "\n";
}

