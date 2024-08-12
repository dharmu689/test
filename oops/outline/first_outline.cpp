#include<iostream>
using namespace std;

class outside
{
    public:
    int x,y,z;
    void get();
    void sum();
    void display();
};
void outside :: get()
{
   cout<<"Enter the first number :";
   cin>>x;
   cout<<"Enter the second number :";
   cin>>y;
}
void outside :: sum()
{
    z = x+y;
}
void outside :: display()
{
   cout<<"The result : "<<z;
}
int main()
{
    outside a1;
    a1.get();
    a1.sum();
    a1.display();
    return 0;
}