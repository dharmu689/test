#include <iostream>
using namespace std;

// Declare linked list node
struct Node 
{
    int data;
    struct Node* link;
};

struct Node* top = NULL;

// Utility function to add an element data in the stack
void push(int data) {
    // create new node temp and allocate memory
    struct Node* temp = new Node();
    
    // check if stack (heap) is full. Then inserting an element would lead to stack overflow
    if (!temp) {
        cout << "\nHeap Overflow";
        exit(1);
    }

    // initialize data into temp data field
    temp->data = data;

    // put top pointer reference into temp link
    temp->link = top;

    // make temp as top of Stack
    top = temp;
}

void pop() 
{
    struct Node* temp;

    // check for stack underflow
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    } 
    else 
    {
        // top assign into temp
        temp = top;

        // assign second node to top
        top = top->link;

        // destroy connection between first and second
        temp->link = NULL;

        // release memory of top node
        delete temp;
    }
}

void display() 
{
    struct Node* temp;

    // check for stack underflow
    if (top == NULL) 
    {
        cout << "\nStack Underflow";
        exit(1);
    } 
    else 
    {
        temp = top;
        while (temp != NULL) 
        {
            // print node data
            cout << temp->data << " ";

            // assign temp link to temp
            temp = temp->link;
        }
    }
}

int main() {
    // push the elements of stack
    push(11);
    push(22);
    push(33);
    push(44);
    push(55);
    push(66);

    cout << "\nStack elements after PUSH operation: ";
    // display stack elements
    display();

    // delete top elements of stack
    pop(); pop();

    cout << "\nStack elements after POP operation: ";
    // display stack elements
    display();

    return 0;
}
