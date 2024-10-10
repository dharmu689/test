#include<iostream>
using namespace std;

class base
{
    public:
    
    virtual void show()
    {
        cout<<"bace class.";
    }
};

class D: public base
{
    void show()
    {
        cout<<"d class ";

    }
};

int main()
{
    base *ptr;
    D d1;
    ptr=&d1;
    ptr->show();
    return 0 ;
}