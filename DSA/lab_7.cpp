#include<iostream>

#include<stack>

using namespace std;
void Postfix(char exp[])
{
    stack<char> s;
    int i;
    char output[50],t;
    for(i=0; exp[i] !='\0';i++)
    {
        char ch = exp[i];
        switch (ch)
        {
            case '^':
            case '-':
            case '+':
            case '*':
             s.push(ch);
            break;
            
            case ')' : 
                   t = s.top();
                       s.pop();
                       cout<<t;
                       break;
        }
        if(isalnum(ch))
        cout<<ch;

    }
}
    int main()
    {
        char exp[]= "a+b*(c^d-e)^(f+g*b)";
        cout<<"\n con pos ";
        Postfix(exp);
        return 0;
    }

