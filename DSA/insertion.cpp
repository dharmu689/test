#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5; // Current number of elements
    int newElement = 6;

    arr[n] = newElement;
    n++;

    // Display the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
