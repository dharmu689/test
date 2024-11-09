//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INTRDSGN
//Solution - https://www.codechef.com/viewsolution/1104224688

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if ((x1 + y1) >= (x2 + y2))
        {
            cout << x2 + y2 << endl;
        }
        else
        {
            cout << x1 + y1 << endl;
        }
    }

}



