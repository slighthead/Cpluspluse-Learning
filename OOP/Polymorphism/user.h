#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include <string>


class User
{
    static int user_count;
    std::string status = "Gold";
    
    public:
        static int get_user_count(); // get static member
        std::string first_n;
        std::string last_n;
        std::string get_status(); // getter 
        void set_status(std::string status); // setter


        User();
        User(std::string first_n, std::string last_n);
        User(std::string first_n, std::string last_n, std::string status); // can initial the private member
        ~User();

        virtual void output(); // polymorphism
        friend void output_status(User user); // friend
        friend std::ostream& operator << (std::ostream& output, User user); //friend

};


void output_status(User user);

std::ostream& operator << (std::ostream& output, User user);
std::istream& operator >> (std::istream& input, User &user);

#endif