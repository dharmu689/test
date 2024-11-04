//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF?tab=statement
//Solution - https://www.codechef.com/viewsolution/1101247469


#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int p =(x*y)/2;
	    if(p<z)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}

}


