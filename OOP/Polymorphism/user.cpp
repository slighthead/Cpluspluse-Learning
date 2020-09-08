#include <iostream>
#include <vector>
#include <string>
#include "user.h"

using std::cout;

int User::user_count = 0;
    
int User::get_user_count() // get static member
{
    return user_count;
}
std::string User::get_status() // getter 
{
    return status;
}
void User::set_status(std::string status) // setter
{
    if(status =="Gold"||status =="Silver")
    {this->status = status;}
    else{ this->status = "No status";}
}


User::User()
{
    user_count++;
    //cout <<"construct"<< std::endl;
}
User::User(std::string first_n, std::string last_n)
{
    this->first_n = first_n;
    this->last_n = last_n;
    user_count++;
    //cout <<"construct with name"<< std::endl;
}
User::User(std::string first_n, std::string last_n, std::string status) // can initial the private member
{
    this->first_n = first_n;
    this->last_n = last_n;
    this->status = status;
    user_count++;
    //cout <<"construct with name and status"<< std::endl;
}
User::~User()
{
    user_count--;
    //cout<< "destruct"<< std::endl;
}

void User::output()
{
    cout<< "User:output !!\n";
}

void output_status(User user); // friend
std::ostream& operator << (std::ostream& output, User user); //friend


void output_status(User user)
{
    cout <<"Status: " <<user.status<< std::endl;
}


std::ostream& operator << (std::ostream& output, User user) //friend
{
    output << "First Name: "<< user.first_n <<std::endl<<
    "Last name: "<<user.last_n << "\nStatus: "<< user.status<< std::endl;
    
    return output;
}
std::istream& operator >> (std::istream& input, User &user)
{
    input >> user.first_n >> user.last_n;
    return input;
}

