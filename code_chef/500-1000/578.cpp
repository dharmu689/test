//Quetion - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2
//Solution - https://www.codechef.com/viewsolution/1105052641

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
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        if((p+q+r)<s || (p+q+s)<r || (p+r+s)<q || (q+r+s)<p)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }

    }

}