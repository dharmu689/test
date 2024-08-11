#include<iostream>
using namespace std;

#define pi 3.14
int r = 5;


class abc
{
    public:
    int x,y,z;

   void display()
    {
        z = x * y;
        cout <<z;
        cout<<endl;

    }
};
void area();

int main()
{
    abc a1;

    a1 . x = 10;
    a1 . y = 20;
    a1 . display();

    cout<<"i am in main function " << endl;
    area();

    return 0;

}
void area()
{
    cout<<"Area:" <<pi*r*r;
    
}
