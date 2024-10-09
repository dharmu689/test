#include <bits/stdc++.h>
using namespace std;
// Function to print an integer
void print(int i) {
    cout << "Printing int: " << i << std::endl;
}

// Function to print a double
void print(double d) {
    cout << "Printing double: " << d << std::endl;
}

// Function to print a string
void print(std::string s) {
    cout << "Printing string: " << s << std::endl;
}

// Function to calculate area of a square
int area(int side){
    return side * side;
}

// Function to calculate area of a rectangle
int area(int length, int width) {
    return length * width;
}


int main() {
    print(42);           // Calls print(int)
    print(3.14);         // Calls print(double)
    print("Hello!");     // Calls print(string)
    cout << area(9);     // Calls area(int side)
    cout << area(2, 4);  // Calls area(int length, int width)
    return 0;
}