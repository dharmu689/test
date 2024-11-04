//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A?tab=statement
//Solution - https://www.codechef.com/viewsolution/1101997616

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int n, lucky = 0, unlucky = 0, i, j;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (j = 0; j < n; j++)
    {
        if (a[j] % 2 == 0)
        {
            lucky++;
        }
        else
        {
            unlucky++;
        }
    }
    if (lucky > unlucky)
    {
        cout << "READY FOR BATTLE";
    }
    else
    {
        cout << "NOT READY";
    }
    
}