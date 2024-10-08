#include <iostream> 
#include <stack> 
using namespace std;
// Function to evaluate given postfix expression 
int postfixEval(string exp)
{
// create an empty stack 
stack<int> stack;
// traverse the given expression 
for (int i = 0; i < exp.length(); i++)
{
// if current char is an operand, push it to the stack
if (exp[i] >= '0' && exp[i] <= '9') {
stack.push(exp[i]-'0');
}
// if current char is an operator
else
{
// pop top two elements from the stack 
int x = stack.top();
stack.pop();
int y = stack.top(); 
stack.pop();
// evaluate the expression x op y, and push the
// result back to the stack 
if (exp[i] == '+')
stack.push(y + x);
else if (exp[i] == '-')
stack.push(y - x);
else if (exp[i] == '*')
stack.push(y * x);
else if (exp[i] == '/')
stack.push(y / x);
}
}
// At this point, the stack is left with only one element
// i.e. expression result 
return stack.top();
}
int main()
{ 
char exp[20];
char *e;
cout<< "\n enter postfix Expression: ="; 
cin>>exp;
e = exp;
cout << postfixEval(e);
return 0;
}