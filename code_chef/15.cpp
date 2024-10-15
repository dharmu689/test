#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int c = a+b+(a*b);

    if(c==111)
    {
        cout<<"Yes";
    }
    else
    {
          cout<<"No";
    }
    

    return 0;
}