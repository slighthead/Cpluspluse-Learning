#include <iostream>
#include <vector>
#include <string>
#include "user.h"
#include "Teacher.h"

using std::cout;


int main()
{

    Teacher te;
    User& u = te;
    u.output();    

    return 0;
}





