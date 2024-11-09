//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INVESTMENT
//Solution - https://www.codechef.com/viewsolution/1103938069

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
	    int i = x-y;
	    if(i>=y)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}

}



