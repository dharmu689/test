//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BULLBEAR
//Solution -https://www.codechef.com/viewsolution/1101722012

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
	    if(x>y)
	    {
	        cout<<"loss"<<endl;
	    }
	    else if(x==y)
	    {
	        cout<<"neutral"<<endl;
	    }
	    else
	    {
	        cout<<"profit"<<endl;
	    }
	}

}
