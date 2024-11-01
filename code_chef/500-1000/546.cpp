//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA?tab=statement
//Solution - https://www.codechef.com/viewsolution/1103283339

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
        int y = (n * x + 3) / 4;

        cout << y << endl;
    }
}