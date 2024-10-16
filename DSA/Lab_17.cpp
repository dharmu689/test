#include<iostream>
using namespace std;

int main()
{
    int size,arr[20],i,j,temp;
    cout<<"Enter Array size: ";
    cin>>size;
    cout<<"Enter Array element: ";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"sorting array using selection sort..."<<endl;
    for(i=1;i<size;i++)
    {
        temp = arr[i];
        j = i - 1;
        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    cout<<"array after sorting: ";

    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}