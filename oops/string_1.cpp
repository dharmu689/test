#include<iostream>
using namespace std;

class ABC
{
   public:
   string s1 = "Hello";
   string s2 = "world";

   void display()
   {
    string s3 = s1 + " " + s2;
    cout<<s3;

   }

};
int main()
{
    ABC a;
    a.display();
    return 0;
}