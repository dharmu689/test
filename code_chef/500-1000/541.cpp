//Questtion - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING?tab=statement
//Solution - https://www.codechef.com/viewsolution/1102007406

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
       if((b1+b2+b3)<=1)
       {
           cout<<"water filling time"<<endl;
       }
       else
       {
           cout<<"not now"<<endl;
       }
    }

}

