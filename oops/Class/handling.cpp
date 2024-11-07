#include<iostream>
using namespace std;

int main()
{
    try
    {
        int num1,num2;
        cout<<"enter two number: ";
        cin>>num1>>num2;
        if(num2==0)
        {
            throw "Division by zero error!";
        }
        cout<<"result: "<<num1/num2<<endl;
    }
    catch(const char* msg)
    {
        cerr << "Exception "<<msg<<endl;
    }
    
}