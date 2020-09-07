#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using std::cout;
using std::cin;

void play_game ();



int main()
{
    
    srand(time(NULL)); // randomnize the seed
    int choice; 
    do
    {
        cout << "0. Quit\n1. Play game\n";
        cin >> choice;

        switch(choice)
        {
            case 0:
                cout << "Thanks for nothing, Bye. \n";
                return 0;
            case 1:
                play_game(); 
                break;
        }


    } while (choice != 0);

    return 0;

}


void play_game()
{
    int random = rand()%26;
    cout << "Let's play\n";
    cout << "Guess a number:\n";
    int guess;
    while(true)
    {
        cin >> guess;
        if (guess == random)
        {
            cout << "You win! \n";
            break;
        } else if (guess < random)
        {
            cout << "Too low ! \n";
        } else 
        {
            cout << "Too high ! \n";
        }
    }

}