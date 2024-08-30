#include<iostream>
using namespace std;

int  main()
{
    int arr[10],i,n,j,temp;
    cout<<"size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(i=0;i<n;i++)
    {
        cin>> arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    cout<<"shorted element: ";
    for(i=0;i<n;++i)
    {
        cout<<arr[i]<<endl;
    }
     return 0;
}