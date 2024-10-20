#include<iostream>
using namespace std;
template<class t>
void compare(t a,t b)
{
t largest;
if(a>b)
{
largest=a;
}
else
largest=b;
cout<<"largest="<<largest;
}
int main()
{ 
    int i,j;
cout<<"Enter 1st integer values: ";
cin>>i;
cout<<"Enter 2nd integer values: ";
cin>>j;
compare(i,j);
float p,q;
cout<<endl;
cout<<"Enter 1st float values: ";
cin>>p;
cout<<"Enter 2nd float values: ";
cin>>q;
compare(p,q);
return 0;
}
