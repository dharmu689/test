//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS
//Solution - https://www.codechef.com/viewsolution/1102000912
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
        int coin = x*y;
        cout<<coin/100<<endl;
  	}
	
}
