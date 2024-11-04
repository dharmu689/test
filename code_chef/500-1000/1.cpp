
// 500_Greater Average

//Question link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM?tab=statement

// Solution - https://www.codechef.com/viewsolution/1099253999


#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    double A,B,C;
	    cin>>A>>B>>C;
	    
	    double D = (A+B)/2;
	    
	    if(D>C)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}

}



