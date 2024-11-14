//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CMASKS
//Solution - https://www.codechef.com/viewsolution/1106938165

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if((x*100)>=(y*10))
	    {
	        cout<<"cloth"<<endl;
	    }
	    else
	    {
	        cout<<"disposable"<<endl;
	    }
	    
	}

}
