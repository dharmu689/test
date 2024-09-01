#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5; // Current number of elements
    int position = 2; // Delete element at index 2

    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    // Display the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
