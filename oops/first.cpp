#include<iostream>
using namespace std;

#define pi  3.14
int r=5;

class abc
{
    public:

    int x,y,z;

   void display()
    {
        z = x * y;
        
        cout<<z;
    }
};
int main()
{
    abc A1;
    A1 . x=10;
    A1 . y=20;
    A1 . display();
    return 0;
}