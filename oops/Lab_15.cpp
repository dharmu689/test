#include<iostream>
using namespace std;
class B
{
    public:
    virtual void show()
    {
        cout<<"show of B class. "<<endl;
    }
};

class D:public B
{

    void show()
    {
        cout<<"show of D class."<<endl;
    }
};

class D1:public B
{
    void show()
    {
        cout<<" show of D1 class."<<endl;
    }
};

int main()
{
    B *p;
    B B1;
    p =& B1;
    p -> show();
    D obj;
    p =& obj;
    p -> show();
    D1 obj1;
    p =& obj1;
    p -> show();
    
    
    return 0;
}
