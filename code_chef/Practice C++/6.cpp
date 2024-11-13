#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";

    cin >> b;
    //cout << "The sum is: " << a + b << endl;
    int D = a*a + 2*a*b + b*b;
    
    int C = a+b;
    cout << C << endl;
    cout << D << endl;
    
    return 0;
}



