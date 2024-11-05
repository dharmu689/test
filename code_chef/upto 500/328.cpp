//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/RAINFALL1
//Solution - https://www.codechef.com/viewsolution/1102587378

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x<3)
	    {
	        cout<<"LIGHT"<<endl;
	    }
	    else if(x>=3 && x<7)
	    {
	        cout<<"MODERATE"<<endl;
	    }
	    else
	    {
	        cout<<"HEAVY"<<endl;
	    }
	}

}