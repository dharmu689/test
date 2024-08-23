#include <iostream>
using namespace std;

class ABC
{
public:
    string s1 = "Hello";
    string s2 = "world";

    string s3 = s1 + " " + s2; 

    ABC()
    {
        s3.push_back('!'); 

    }

    void display()
    {
        cout << s3 << endl; 
    
    }
};

int main()
{
    ABC a;
    a.display();
    return 0;
}
