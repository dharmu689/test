#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter the numbers: ";
    cin>>n;
    while(n!=0)
    {
        n/=10;
        cout<<count;
        count++;
    }
    
    return 0;
}