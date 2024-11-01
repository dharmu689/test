//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALESEASON
//Solution - https://www.codechef.com/viewsolution/1103275800
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x <= 100)
        {
            cout << x << endl;
        }
        else if (100 < x && x <= 1000)
        {
            cout << x - 25 << endl;
        }
        else if (1000 < x && x <= 5000)
        {
            cout << x - 100 << endl;
        }
        else
        {
            cout << x - 500 << endl;
        }

    }

}