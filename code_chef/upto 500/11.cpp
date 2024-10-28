//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PRIZEPOOL
//Solution - https://www.codechef.com/viewsolution/1101258905

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin >>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x>=y)
	    {
	        cout<<x*10+y*90<<endl;
	    }
	    else
	    {
	        cout<<x*10+y*10<<endl;
	    }
	}

}