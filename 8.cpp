#include <iostream>
using namespace std;

// Function to calculate C
int calculateC(int A, int B) {
    return A * A + 2 * A * B + B * B;
}

// Function to calculate D
int calculateD(int A, int B) {
    return A + B;
}

int main() {
    // Repeat the input, calculation, and output process thrice
    for (int i = 0; i < 3; i++) {
        int A, B;
        cin >> A >> B;
        
        // Use functions to calculate C and D
        int C = calculateC(A, B);
        int D = calculateD(A, B);
        
        cout << C << endl;
        cout << D << endl;
    }
    
    
}