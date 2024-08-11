#include<iostream>
using namespace std;

class greatest
{
    private:
    int x,y;

    public:
    void greatestnumber()
    {
        cout<<"Enter the two number :";
        cin>> x >> y;
    }

    void display()
    {
        if (x>y)
        cout<<"the greatest number is :" << x << endl;
        // else if (y>x)
        // cout<<"the greatest numer is :" << y <<endl;
        else 
        cout<<"the greatest numer is."<< y <<endl;
        
    }
};
int main()
{
    greatest a1;
    a1 . greatestnumber();
    a1 . display();
    return 0;

}
