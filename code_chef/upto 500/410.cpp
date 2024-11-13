//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HS08TEST?tab=Submissions
//Solution - https://www.codechef.com/viewsolution/1105970079

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int x;
    double y;
    cin >> x;
    cin >> y;
    if ((x % 5) == 0 && (y >= x + .50))
    {
        cout << (y - x) - (0.50);
    }
    else
    {
        cout << y;
    }

}