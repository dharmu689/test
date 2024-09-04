#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> C;
        if(A % 2 ==0 && C % 2 == 0){
        B = (A+C)/2;
        cout<<B<<endl;
        }
        else if(A % 2 !=0 && C % 2 !=0)
        {
            B=(A+C)/2;
            cout<<B<<endl;
        }
        else
        {
        cout<<-1<<endl;
        }


    }
    return 0;
}