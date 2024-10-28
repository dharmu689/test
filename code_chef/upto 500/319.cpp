//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/OCTATHON

//Solution - https://www.codechef.com/viewsolution/1102298878

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int x;
	cin>>x;
	if(x<3)
	{
	    cout<<"GOLD"<<endl;
	}
	else if(x>=3 && x<6)
	{
	    cout<<"SILVER"<<endl;
	}
	else if(x>=6)
	{
	    cout<<"BRONZE"<<endl;
	}
	
  return 0;
}
