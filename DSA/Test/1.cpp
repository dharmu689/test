#include<iostream>
using namespace std;

int main()
{
    int a=1,b=2,c=3;

    int first,second;

    cin>>first>>second;

    if(a==first&b==second)
    cout<<c;

    else if(b==first&c==second)
    cout<<a;
    
    else if(a==first&c==second)
    cout<<b;

    return 0;
}