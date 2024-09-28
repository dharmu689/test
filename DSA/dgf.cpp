#include<iostream>
using namespace std;

int main()
{
    int a[5] = {5, 8, 65, 52, 32};
    
    int item,i;
    // enter the item
    
    cout << "Enter the item to be found: ";

    cin >> item;

    for(i = 0; i < 5; i++)
    {
        if(a[i] == item)
        {
            cout << "Item is found at index: " << i << endl;
            
            break; 
        }
    }

    if(i == 5)
    {
        cout << "Item is not found" << item << endl;
    }

    return 0;
}
