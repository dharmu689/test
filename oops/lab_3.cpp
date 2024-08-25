#include<iostream>
using namespace std;

class ABC
{
    private:
    static int count;
    int number;
    public:
    void get(int a)
    {
        number = a;
        count ++;
    }
    void show()
    {
        cout<<"Number = " <<number <<endl;
        cout<<"Count = " <<count <<endl;
    }
};

int ABC :: count = 0;

int main()
{
   ABC a1,a2,a3;
   a1.get(30);
   a2.get(40);
   a3.get(50);
   a1.show();
   a2.show();
   a3.show();
    
return 0;

}