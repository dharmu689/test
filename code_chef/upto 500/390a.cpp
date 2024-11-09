//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENSPICE
//Solution - https://www.codechef.com/viewsolution/1105270057

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
	    if(4>x)
	    {
	        cout<<"MILD"<<endl;
	    }
	    else if(x>=4 && x<7)
	    {
	        cout<<"MEDIUM"<<endl;
	    }
	    else
	    {
	        cout<<"HOT"<<endl;
	    }
	}

}




