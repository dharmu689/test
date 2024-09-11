#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, i, top, bottom, mid, item;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(i = 0; i < n; i++)
        {
        cin >> arr[i];
        }

    cout << "Enter the element to find in array: ";
    cin >> item;

    top = 0;
    bottom = n - 1;

    

    while(top <= bottom)
    {
        mid = (top + bottom) / 2;

        if(arr[mid] < item)
            top = mid + 1;
        else if(arr[mid] == item)
        {
            cout << "Item found at index: " << mid;
            break;
        }
        else
            bottom = mid - 1;
            mid = (top+bottom)/2;
    }

    if(top > bottom)
        cout << "Item not found.";

    return 0;
}
