#include<iostream>
using namespace std;
int main()
{
    try
    {
        int num = 10;
        int demo;
        int result;
        cout<<"number: ";
        cin>>demo;
        if(demo==0)
        {
            throw runtime_error("division by zero not allowed......!");
        }
            result = num/demo;
            cout<<"result is: "<<result;
        
    }
    catch(exception & e)
    {
        cout<<"exception is " << e.what() << '\n';
    }
    return 0;
    
}
