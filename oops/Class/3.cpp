#include <iostream>
using namespace std;

int main() 
{
    int x;
    cout<<"x= ";
    cin >> x;
    cout << "before try: " <<x << endl;

    try 
    {
        cout << "after try: " <<x << endl;
        if (x < 0) 
        {
            throw x;
            // This line will never be executed, because throw x will transfer control to the catch block
            cout << "after throw: " << x << endl;
        }
    } catch (int x) 
    {
        cout << "x = " << x << endl;
        cout << "exception caught: "<< x << endl;
    }

    cout << "after catch will execute: " << x << endl;

    return 0;
}
