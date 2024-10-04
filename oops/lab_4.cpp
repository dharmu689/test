#include<iostream>
using namespace std;

class ABC
{
   private:
   int data;
   
   public:

   void assign()
   {
      data = 20;
   }

   void changedata()
   const
   {
      cout<<"can't the data of constant member fumction!" <<endl;
   }

   void show()
   {
    cout<<"Data = " <<data <<endl;
   }
   
};
int main()
{
    ABC a;
    a.assign();
    a.show();
    a.changedata();
    a.show();
    return 0;

}