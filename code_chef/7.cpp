#include<iostream>
using namespace std;

int area(int a, int b)
{
	return a*a+b*b+2*a*b;
}

int main() 
{
	// your code goes here
	
	/*int a,b,c,d;
	cin>>a>>b;
	
	c = a*a+2*a*b+b*b;
	d = a+b;
	
	cout<<c<<endl;
	cout<<d<<endl;
	
	cin>>a>>b;
	c = a*a+2*a*b+b*b;
	d = a+b;
	cout<<c<<endl;
	cout<<d<<endl;
	
	cin>>a>>b;
	c = a*a+2*a*b+b*b;
	d = a+b;
	cout<<c<<endl;
	cout<<d<<endl;*/
	
	int num1, num2 ,t;

	cout<<"1 no: ";
	cin>>num1;
	
	cout<<"2 no: ";
	cin>>num2;

	int result1 = area(num1,num2);

	cout<<"area of a and b : " << result1;
	
      return 0;
}
