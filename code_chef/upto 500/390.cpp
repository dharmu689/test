//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINCOINSREQ?tab=statement
//Solution - https://www.codechef.com/viewsolution/1105043591

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int notes, coin;
        notes = x / 10;
        coin = x - (notes * 10);
        cout<<coin<<endl;
    }

}