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


int main()
{
    User user1, user2;
    user1.first_n = "Xiaochu";
    user2.first_n = "Qing";
    
    cout << User::get_user_count() << std::endl;
    
    /*std::vector<User> users;
    
    users.push_back(user1);
    users.push_back(user2);
    */
    User user3;
    user3.first_n = "Haha";
    //cout<< add_user(users,user3) << std::endl;
    
    User user4("Xiao","Hao");
    cout << user4.first_n << std::endl;
    cout << user4.last_n << std::endl;

    User user5("Da","Hao","Silver");
    cout << user5.get_status() << std::endl;
    user5.set_status("Tacos");
    cout << user5.get_status() << std::endl;
    

    cout << User::get_user_count() << std::endl;

    return 0;
}





