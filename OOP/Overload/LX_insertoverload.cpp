#include <iostream>
#include <vector>


using std::cout;

class User
{
    static int user_count;
    std::string status = "Gold";
    
    public:
        static int get_user_count() // get static member
        {
            return user_count;
        }
        std::string first_n;
        std::string last_n;
        std::string get_status() // getter 
        {
            return status;
        }
        void set_status(std::string status) // setter
        {
            if(status =="Gold"||status =="Silver")
            {this->status = status;}
            else{ this->status = "No status";}
        }


        User()
        {
            user_count++;
            //cout <<"construct"<< std::endl;
        }
        User(std::string first_n, std::string last_n)
        {
            this->first_n = first_n;
            this->last_n = last_n;
            user_count++;
            //cout <<"construct with name"<< std::endl;
        }
        User(std::string first_n, std::string last_n, std::string status) // can initial the private member
        {
            this->first_n = first_n;
            this->last_n = last_n;
            this->status = status;
            user_count++;
            //cout <<"construct with name and status"<< std::endl;
        }
        ~User()
        {
            user_count--;
            //cout<< "destruct"<< std::endl;
        }
        // friend void output_status(User user); 

};


int User::user_count = 0;

int add_user(std::vector<User> &users, User user)
{
    for(int i=0; i<users.size(); i++)
    {
        if(users[i].first_n == user.first_n)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() -1 ;
}

std::ostream& operator << (std::ostream& output, User user)
{
    output << "First Name: "<< user.first_n <<std::endl<<
    "Last name: "<<user.last_n << std::endl;
    
    return output;
}
std::istream& operator >> (std::istream& input, User &user)
{
    input >> user.first_n >> user.last_n;
    return input;
}



int main()
{
    User user1("Xiaochu","Li");
    cout<< user1 << std::endl;
    std::cin >> user1;
    cout<< user1 << std::endl;

    cout << "Done"<< std::endl;

    return 0;
}





