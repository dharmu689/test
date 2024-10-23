#include<iostream>
using namespace std;
int main()
{
    try
    {
        int num;
        int demo;
        int result;
        cout<<"random number"<<endl;
        cout<<"random demo"<<endl;
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