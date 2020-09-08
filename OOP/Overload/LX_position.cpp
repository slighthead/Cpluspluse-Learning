#include <iostream>
using std::cout;


class Posi
{
    public:
        int x = 10;
        int y = 20;
        Posi operator + (Posi pos)
        {
            Posi new_pos;
            new_pos.x = x + pos.x;
            new_pos.y = y + pos.y;
            return new_pos;
        }
        bool operator == (Posi pos)
        {
            if( x==pos.x && y==pos.y)
            {
                return true;
            }
            return false;
        }

};

int main()
{
    Posi p1,p2;
    Posi p3 = p1+p2;
    cout<< p3.x << std::endl << p3.y << std::endl;
    if (p1==p2)
    {
        cout << "They are the same!!"<< std::endl;
    }
    
    return 0;
}
