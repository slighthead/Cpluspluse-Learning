#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

using std::cout;
using std::cin;

void print_array(const int *, int);

int main()
{
    /*
    int guesses[] = {12 ,34, 56, 78, 90};// guesses[20]; // guesses[] = {10,25,15}; // integer array
    guesses[3] = 200;
    int size = sizeof(guesses)/sizeof(guesses[0]);

    for (int i = 0; i <size; i++)
    {
        cout<< guesses[i]<<"\t";
    }

    */
    const int SIZE = 100;
    int guesses[SIZE] = {12 ,34, 56, 78, 90};
    //int size = sizeof(guesses)/sizeof(guesses[0]);
    int count  = 0;
    for (int i = 0; i<SIZE; i++)
    {
        if(cin>> guesses[i])
        {
            count++;
        }else
        {
            break;
        }
    }
    
    
    print_array(guesses,count);
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string test;
    cout <<"Put some words: \n";
    getline(cin, test);
    
    cout << "You put words: "<< test<< std::endl;  

    return 0;
}

void print_array(const int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<< array[i]<<"\t";
    }
    cout<< std::endl;

}