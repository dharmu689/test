//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3
//Solution - https://www.codechef.com/viewsolution/1103485727

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if ((a * b) <= (x * y))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

}