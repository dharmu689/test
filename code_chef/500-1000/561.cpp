//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT
//Solution - https://www.codechef.com/viewsolution/1103481467

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        double x, y;
        cin >> x >> y;
        if (y >= (x/2))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }


}