#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }

    // Overloaded functions
    void display(int i) {
        cout << "Displaying int: " << i * 2 << endl;
    }

    void display(double d) {
        cout << "Displaying double: " << d << endl;
    }
};

class Derived : public Base {
public:
   void show() override {
        cout << "Derived class" << endl;
    }

    // Overloading in derived class
    void display(string s) {
        cout << "Displaying string: " << s << endl;
    }
};

int main() {
    Base* b;
    Derived d;

    // Dynamic polymorphism
    b = &d;
    b->show(); // Calls Derived's show() at runtime

    // Static polymorphism
    Base obj;
    obj.display(10);      // Calls display(int) of Base
    obj.display(10.5);    // Calls display(double) of Base
    d.display("Hello");   // Calls display(string) of Derived

    return 0;
}
