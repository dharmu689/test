//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST
//Solution - https://www.codechef.com/viewsolution/1104228295

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            cout << "car" << endl;
        }
        else if(x < y)
        {
            cout << "bike" << endl;
        }
        else
        {
            cout << "same" << endl;
        }
    }

}