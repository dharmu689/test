//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND?tab=statement
//Solution - https://www.codechef.com/viewsolution/1103676667

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n <= x)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << (n - x + 3) / 4 << endl;
        }

    }

}