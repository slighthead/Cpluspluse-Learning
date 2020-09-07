#include <iostream>
#include <string>

using std::cout;
using std::cin;
// branching: if ; switch
// looping: while; for; do while


int main()
{
    int age  = 15; 
    cout << "How old are you?? \n";
    
    cin >> age;
    
    // && || !
    // == != < > <= >=

    if (age<13 && !false)
    {
        cout << "You are young!! \n";
    }
    else if (age < 19)
    {
        cout << "You are okay!!\n";
    } 
    else
    {
        cout << "You are old!! \n";
    }



    // switch

    switch (age)
    {
        case 18:
            cout << "Your age is:" << age << ". \n";
            break;
        default:
            cout << "Your age is not 18.\n";
            break;



    }

    enum seasons{spring,summer,fall,winter};

    seasons now = winter;
    switch (now)
    {
        case winter: 
            cout << "Stay warm! \n";
            break;
    
    default:
        break;
    } 


    // loop
    // at least one time : do-while; 0 time : while

    
    
    for (int i = 0; i < 10; i++)
    {
        cout << i << std::endl;

    }
    int factor = 5;
    cout << "Factorial by using FOR of " << factor <<" is:"<< std::endl;
    for (int i = factor-1; i>1; i--)
    {
        factor = factor*i;
    }
    cout << factor << std::endl;

    factor = 5;
    int i = factor-1;
    cout << "Factorial by using WHILE of " << factor <<" is:"<< std::endl;
    while(i > 1)
    {
        factor *= i;
        i--;
    }

    cout << factor << std::endl;


    // do-while loop
    
    std::string passwd = "1234";
    std::string guess;
    do
    {
        cout << "Password:"<< std::endl;
        cin >> guess;
    } while (guess != passwd);

    return 0;
}