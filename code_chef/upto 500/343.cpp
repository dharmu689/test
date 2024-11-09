//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/READPAGES
//Solution - https://www.codechef.com/viewsolution/1103099804

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (n <= (x * y))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    
}



