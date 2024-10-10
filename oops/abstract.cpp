#include<iostream>
using namespace std;

class abstract_base
{
    public:
    virtual void display() = 0;

};

class create_drived:public abstract_base
{
    public:
    void display()
    {
        cout<<"display";
    }
};

int main()
{
    create_drived d1;
    d1.display();
    return 0;
}