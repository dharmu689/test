//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE
//Solution - https://www.codechef.com/viewsolution/1104237639

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;
        if ((a <= c) && (b <= d))
        {
            cout << "possible" << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }

}