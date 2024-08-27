#include <iostream>
#include <stack>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to check the precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

// Function to check if the character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to perform the infix to prefix conversion
string infixToPrefix(string infix) {
    // Reverse the infix expression
    reverse(infix.begin(), infix.end());

    // Replace '(' with ')' and vice versa
    for (int i = 0; i < infix.size(); i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    stack<char> operators;
    string prefix;

    // Iterate over the reversed infix expression
    for (char &c : infix) {
        if (isalnum(c)) {
            prefix += c;  // Append operands (characters and digits) directly to the result
        } else if (c == '(') {
            operators.push(c);  // Push '(' to stack
        } else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                prefix += operators.top();  // Pop and add to prefix until '(' is encountered
                operators.pop();
            }
            operators.pop();  // Pop '('
        } else if (isOperator(c)) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                prefix += operators.top();  // Pop and add to prefix until lower precedence operator is encountered
                operators.pop();
            }
            operators.push(c);  // Push current operator to stack
        }
    }

    // Pop all the remaining operators in the stack
    while (!operators.empty()) {
        prefix += operators.top();
        operators.pop();
    }

    // Reverse the prefix expression to get the final result
    reverse(prefix.begin(), prefix.end());

    return prefix;
}

int main() {
    string infix = "(C-D) + E*(F-G) ^ H";
    cout << "Infix Expression: " << infix << endl;
    
    string prefix = infixToPrefix(infix);
    cout << "Prefix Expression: " << prefix << endl;

    return 0;
}
