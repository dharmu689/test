#include <iostream>
using namespace std;

// User-defined function to generate and print a list of numbers from 1 to limit
void list_generator(int limit) 
    // Update the code below to solve the problem
   
    {
        for(int i = 1;i<=limit;i++)
        {
        cout<<i<<" ";
        }
        cout<<endl;
    }

// Do not update the code below this line

int main()
 {
    int A, B;
    
    cout<<"1n: ";
    cin >> A ;

    cout<<"2n: ";
    cin>> B;

    list_generator(A);
    list_generator(B);

    
}



