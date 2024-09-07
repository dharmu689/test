#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, item, i;
    
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the element to find: ";
    cin >> item;

    bool found = false;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            cout << "Found the data at index " << i << endl;
            found = true;
            break; // Exit the loop once found
        }
    }

    if (!found)
        cout << "Item not found in the array." << endl;

        

    return 0;
}
