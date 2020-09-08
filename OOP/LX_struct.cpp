#include <iostream>

using std::cout;

struct User
{
    std::string first_n;
    std::string last_n;
    std::string status;
    int get_age()
    {
        return age;
    }
    private:
        int age = 20;
};

int main()
{
    User me;
    me.first_n = "Xiaochu";
    me.last_n = "Li";
    me.status = "Gold";
    int age = me.get_age();

    cout << me.first_n<< std::endl;
    cout << age << std::endl;
    return 0;
}