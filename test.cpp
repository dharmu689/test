#include<iostream>
using namespace std;

#define pi 3.14
int r = 5;

class abc
{
    public:
    int x, y, z;

    void display()
    {
        z = x * y;
        cout << z << endl;
    }
};

// Function declaration
void area();

int main()
{
    abc a1;

    a1.x = 10;
    a1.y = 20;
    a1.display();

    cout << "I am in main function" << endl;

    // Function call
    area();

    return 0;
}

// Function definition
void area()
{
    cout << "Area: " << pi * r * r << endl;
}
