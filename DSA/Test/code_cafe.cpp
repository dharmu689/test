#include <bits/stdc++.h>
using namespace std;

// Function to calculate the area of a square
int area(int side) {
    return side * side;
}

// Overloaded function to calculate the surface area of a cube
int area(int side, bool isCube) {
    if (isCube) {
        return 6 * side * side;
    }
    return 0;
}

// Overloaded function to calculate the area of a circle
double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    int a, b;
    double r;

    cin >> a;

    cin >> b;

    cin >> r;

    cout << area(a) << endl;
    cout << area(b, true) << endl;
    cout << area(r) << endl;

    return 0;
}