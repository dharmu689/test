//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SIXFRIENDS?tab=statement
//Solution - https://www.codechef.com/viewsolution/1104735313

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes herehttps://www.codechef.com/viewsolution/1104735313
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(3*x>=2*y)
	    {
	        cout<<y*2<<endl;
	    }
	    else 
	    {
	        cout<<x*3<<endl;
	    }
	}

}



