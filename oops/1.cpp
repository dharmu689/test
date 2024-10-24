#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << "before try: " << endl;

    try {
        cout << "after try: " << endl;
        if (x < 0) {
            throw x;
            // This line will never be executed because throw x will transfer control to the catch block
            cout << "after throw: " << endl;
        }
    } catch (int x) {
        cout << "x = " << x << endl;
        cout << "exception caught: " << endl;
    }

    cout << "after catch will execute: " << endl;
    return 0;
}
