#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cout<<"Enter the value of a and b: "<<endl;

    cout<<"a = ";
    cin>>a;

    cout<<endl;
    cout<<"b = ";
    cin>>b;

    c = a-b;

    try
    {
        if(c!=0)
        {
            cout<<"The result of a-b is = "<<c<<endl;
        }
        else
        {
           throw(c);
        }
    }
    catch(int x)
    {
        cout<<"exeption has occured: "<<c;
    }
    return 0;
    
}