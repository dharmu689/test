#include<iostream>
using namespace std;
int main()
{
    try
    {
        int num,demo,result;
        cout<<"random number: ";
        cin>>num;
        cout<<"random demo: ";
        cin>>demo;
        if(demo==0)
        {
            throw runtime_error("Division by zero not allowed...!");
        }
        result=num/demo;
        cout<<"result is:"<<result;
    }
    catch(exception& e)
    {
        cout<<"exception is" << e.what() << '\n';
    }
    return 0;
    
}