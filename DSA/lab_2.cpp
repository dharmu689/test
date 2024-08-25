#include<iostream>
using namespace std;
int main()
{
    int arr[50],n,i,j,del,count = 0;

    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be delete: ";
    cin>>del;
    cout<<"Enter the position in which element is to be delete: ";
    cin>>del;
    for(i=0;i<n;i++)
    {
        if(arr[i]==del)
        {
            for(j=i;j<n-1;j++)
            {
                arr[j]==arr[j+1];
            }
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"element deleted successfully";
        cout<<"now the array is: "<<endl;
        for(i=0;i<n-1;i++)
        {
            cout<<arr[i] <<" ";
        }
    }
    return 0;
}