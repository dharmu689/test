#include <iostream>
using namespace std;

class abc
{
    public:
    int x,y,z;

    void display()
    {
        z = x + y;
        cout<<z;
    }

};
int main()
{
    abc a1;
    a1 . x = 85;
    a1 . y = 25;
    a1 . display();
    return 0;

}
