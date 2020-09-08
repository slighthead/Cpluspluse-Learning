#include <iostream>
#include <vector>
#include <string>
#include "user.h"
#include "Teacher.h"

using std::cout;


int main()
{
    User user1("Xiaochu","Li","Sliver");
    cout<< user1 << std::endl;
    std::cin >> user1;
    
    cout<< user1 << std::endl;

    cout << "Done"<< std::endl;
    output_status(user1);

    Teacher te;
    te.output();    

    return 0;
}





