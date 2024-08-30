#include<iostream>
using namespace std;

int main()
{
    int arr[100],n,i,top,bottom,mid,item,result;

    cout<<"Enter the size of array :";
    cin>>n;

    cout<<"Enter the element of array :";
    for(i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter the find of array :";
    cin>>item;

    top = 0;
    bottom = n-1;
   
    while(top<=bottom)
    {
         mid = (top+bottom)/2;

         if(arr[mid]<item)
         top = mid+1;
         else if(arr[mid]==item)
         {
            cout<<"item found at: "<<mid;
            break;
         }
         else
         bottom = mid - 1;
        
         
     }
     if(top>bottom)
     cout<<"item is not found: ";
   
    return 0;
}