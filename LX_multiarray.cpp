#include <iostream>
#include <vector>
using std::cout;
using std::cin;

int main ()
{
    // int grades [][3] = {{1,2,3},{4,5,6},{7,8,9}};

    std::vector<std::vector<int>> grades = {{1,2,3},{4,5,6},{7,8,9}};


    for (int r = 0; r < 3; r++)
    {
        for(int c = 0; c<3; c++)
        {
            cout << grades[r][c] << "\t";
        }
        cout << "\n";
    }

    return 0;
}