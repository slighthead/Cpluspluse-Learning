#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main()
{
    // conditional operator
    int answer = 100;
    cout << "Guess the number: \n";
    int guess;
    cin >> guess;

    guess == answer ? cout << "Good!\n" : cout << "Bad!\n";

    int point  = guess == answer ? 10 : 0;
    cout << "You get " <<point << " points!\n";


}