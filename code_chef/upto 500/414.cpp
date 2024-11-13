//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PROINC
//Solution - https://www.codechef.com/viewsolution/1105974361

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
        cout << (x / 10 + x) - (x - y) << endl;
    }

}