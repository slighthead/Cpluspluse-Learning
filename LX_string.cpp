#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main()
{

    std::string Greetings = "Hello"; // string is a class with methods
    std::string Complete_greet = " There";

    cout << Greetings + Complete_greet << std::endl;
    cout << Greetings + Complete_greet + " !"<< std::endl; // concadination and appending
    cout << Greetings.length() << std::endl;

    std::string UserIn;
    cin >> UserIn; // cin only grasps the first word of the input, cin stops when there is white space, e.g. Space, Enter, Tab.  
    cout << UserIn << std::endl;
    std::string UserIn2; // cin also grasps the following word in the buffer. 
    cin >> UserIn2;
    cout << UserIn2 << std::endl;
    
    // How to get a series of words 
    // Using getline()!! 
    std::string UserIn3;
    getline(cin, UserIn3); // Grasp all the following words in the buffer.
    std::cout<< UserIn3 << std::endl;

    // string modifier methods 
    Greetings += " there"; // append
    Greetings.append("!");
    cout << Greetings.length() << std::endl;

    Greetings.insert(3,"    insert     ");
    cout << Greetings << std::endl;
    Greetings.erase(3,4); // erase 4 characters from 3rd posi
    cout << Greetings << std::endl;
    Greetings.pop_back(); // remove the last characters
    cout << Greetings << std::endl;
    Greetings.replace(0,4,"Heaven"); // replace from 0 posi to 4th posi with "Heaven"
    cout << Greetings << std::endl;

    // string operation methods
    Greetings = "What is this?"; 
    cout << Greetings << std::endl;
    Greetings.replace(Greetings.find("this"), 4, "****");
    cout << Greetings << std::endl;

    cout << Greetings.substr(5,2)<< std::endl; // get sub string with 2 characters form 5th posi

    cout << Greetings.find_first_of("abs")<< std::endl; // return the posi of the first character of the word 'abs'
    cout << Greetings.find_first_of("!")<< std::endl; // should return very large number which is 'npos' = -1
    if (Greetings.find_first_of("!") == -1) cout << "NOT FOUND! "<< std::endl;

    Greetings = "What is this?";
    if(Greetings == "What is this?") cout << "EQUATS!" << std::endl; // this way is recommended.
    // another way to compare
    if(Greetings.compare("What is this?") == 0) cout << "EQUATS!" << std::endl; // .compare is important for java for indentity compare




    return 0;
}