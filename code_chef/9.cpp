#include <iostream>
using namespace std;

// User-defined function to calculate the square of a number
int square(int num) 
{
    return num * num;
}

int main() 
{
    int num1, num2;

    cout << "1st n: " << endl;
    cin >> num1 ;

    cout<<"2nd n: " <<endl;
    cin >> num2;

    int result1 = square(num1); // Call the square function
    int result2 = square(num2); // Call the square function again

    cout << "Square of " << num1 << " is " << result1 <<endl;
    
    cout << "Square of " << num2 << " is " << result2 << endl;

    
}