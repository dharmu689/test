#include<iostream>
using namespace std;

int main()
{
    int arr[10], i, n, j, temp;
    cout << "Size of array: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(i = 0; i < n - 1; i++) // Outer loop should run till n-1
    {
        for(j = 0; j < n - i - 1; j++) // Inner loop should run till n-i-1
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted elements: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
