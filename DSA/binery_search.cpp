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
         
        if(arr[mid] == item)
        {
           result = 0;
        }
        else if(arr[mid] < item)
        {
           top = mid + 1;
        }
        else
          bottom = mid -1;

    }
    if(result == 0)
    {
        cout<<"element found at index: "<<result;
    }
    else
    {
        cout<<"item not found.";
    }
    return 0;
}