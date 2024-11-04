//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFGAMES
//Solution - https://www.codechef.com/viewsolution/1103476778

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int r1,r2,r3,r4;
	    cin>>r1>>r2>>r3>>r4;
	    if((r1+r2+r3+r4)>0)
	    {
	        cout<<"out"<<endl;
	    }
	    else
	    {
	        cout<<"in"<<endl;
	    }
	}

}


