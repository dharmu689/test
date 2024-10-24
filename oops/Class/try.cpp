#include <iostream>
#include <stdexcept> // Include this for runtime_error
using namespace std;

int main() {
    try {
        int num = 10;
        int demo;
        int result;

        cout << "Enter a number for demo: ";
        cin >> demo; // Take input for demo

        if (demo == 0) {
            throw runtime_error("Division by zero not allowed!");
        }

        result = num / demo; // Perform the division
        cout << "Result is: " << result << endl;

    } catch (const exception & e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
