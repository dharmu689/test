#include<iostream>
using namespace std;

class dharmu
{
   public:
   int a,b,c;
   void display()
   {
    cout<<"enter first number:";
    cin>>a;
    cout<<"entet second number:";
    cin>>b;
    
    c = a -b;
    cout<<"the result: "<<c;



   }
};

int main()
{
    dharmu P;
    P.display();
    return 0;
}