#include<iostream>
using namespace std;

int main()
{
    int arr[100],n,item,i;
    cout<<"Enter the size of array :";
    
    cin>>n;
   

    cout<<"Enter array element :";
    for(i=0;i<n;i++)
    cin>>arr[i];

    cout<<"enter the element to find :";
    cin>>item;

    for(i=0;i<n;i++){
    if(arr[i]==item){
    cout<<"found the data :"<<i;
     return 0;
    }

    }

    if(i!=0)
    cout<<"not found the item :";
    return 0;
    
}