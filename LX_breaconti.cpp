#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main()
{
    std::string sentence = "My name is LX!";

    for( int i = 0; i<sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            cout << "We found ' ' !!\n"; 
            //break;
            continue;
        }
       cout << sentence[i]<<" ";
    }
    
    cout <<"We are done!" << std::endl;

    return 0;
}