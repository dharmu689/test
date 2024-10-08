#include <iostream> 
using namespace std;
int queue[20], n , front = 0, rear = 0; void Insert(int val)
{
if (rear == n)
cout<<"Queue Overflow"<<endl;
else
{
rear++; 
queue[rear] = val;
}
}
void Delete()
{
// if queue is empty
if(front == rear)
 {
cout<<"Queue is empty"; 
return;
}
// shift all the elements from index 2 till rear
// to the left by one 
else 
{
 front ++;
}
}
void Display()
{
int i;
if (front == rear) 
{
cout<<"\n Queue is Empty \n "; 
return;
}
// traverse front to rear and print elements 
else
{
for (i = front; i < rear; i++) 
{
cout<< queue[i+1];
}
}
return;
}
int main()
{
// Create a queue of capacity 4
cout<<" \n Enter size of queue:"; 
cin>>n;
Insert(20);
Insert(30); 
Insert(40);
Insert(50);
cout<<"\n After insertion, queue= \n" ;
// print Queue elements 
// insert element in the queue 
Display();
cout<<"enter new element";
Insert(60);
// print Queue elements 
Display();
Delete();
Delete();
cout<<"\n After deletion of 2 nodes,queue=\n";
// print Queue elements 
Display();
return 0;
}