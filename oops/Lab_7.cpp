#include<iostream>
using namespace std;

class C
{
    private:
    int A,B;
    public:
    C(int X, int Y)
    {
    A=X;
    B=Y;
    cout<<"the value of a and b are: "<<A<<" "<<B<<endl;
    //cout<<A<<endl;
    //cout<<B<<endl;
}
void sum()
{
    cout<<"sum is = "<<A+B;
}
};
int main()
{
    C al(20,30);
   // cout<<endl;
    al.sum();
    return 0;
}
