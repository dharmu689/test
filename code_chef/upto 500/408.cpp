//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INSTAGRAM?tab=statement
//Solution - https://www.codechef.com/viewsolution/1105730629

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
        if (x > (y * 10))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

}