//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_?tab=statement
//Solution - https://www.codechef.com/viewsolution/1099730847

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	   int y = n/6;
	   if(n>y*6)
	   {
	       cout<<(y+1)*x<<endl;
	   }
	   else
	   {
	       cout<<y*x<<endl;
	   }
	}






}