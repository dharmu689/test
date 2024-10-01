#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,element;
    
    cout<<"Enter 4 array elements: ";

    for(i=0;i<4;i++)
    {
    cin>>arr[i];
    cout<<"Enter the element to be listed: ";
    cin>>element;
    }
    arr[i] = element;
    cout<<"The new array is: ";
    for(i=0;i<5;i++)
    cout<<arr[i] <<" ";
    cout<<endl;
    return 0;

}