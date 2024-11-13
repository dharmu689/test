//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUCTION
//Solution - https://www.codechef.com/viewsolution/1102590276

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b && a>c)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(b>a && b>c)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Charlie"<<endl;
	    }
	}

}



