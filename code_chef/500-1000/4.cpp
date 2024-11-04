//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DETSCORE
//solution - https://www.codechef.com/viewsolution/1099659819

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
        int a = x / 10;
        cout << a * y << endl;
    }
    
}