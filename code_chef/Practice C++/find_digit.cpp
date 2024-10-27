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
       
        count++;
       // cout<<count<<endl;
    }
    cout<<count;
    
    return 0;
}