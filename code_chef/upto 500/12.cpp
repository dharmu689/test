//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SNDMAX?tab=statement

//Solution - https://www.codechef.com/viewsolution/1101492045


#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t>0)
    {
        int a, b, c;
        cin >> a>>b>>c;
        if((a>b && a<c) || (a<b && a>c))
        {
            cout<<a<<endl;
        }
        else if((b>a && b<c) || (b<a && b>c))
        {
            cout<<b<<endl;
        }
        else
        {
             cout<<c<<endl;
        }
       t--;
    }
    return 0;
}


