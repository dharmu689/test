#include<iostream> 
using namespace std; 
struct node
{
int data;
node *next;
};
 
class list
{
private:
node *head, *tail; 
public:
list()
{
 
head=NULL;
tail=NULL;
}

void create_node(int value)
{
node *temp=new node;
temp->data=value;
temp->next=NULL; 
if(head==NULL)
{
head=temp; 
tail=temp; 
temp=NULL;
}
else
{
tail->next=temp; 
tail=temp;
}
}

void display()
{
node *temp=new node; 
temp=head;
while(temp!=NULL)
{
cout<<temp->data<<"\t";
temp=temp->next;
}
}

void delete_first()
{
node *temp=new node;  
temp=head;
head=head->next;
delete temp;
}

void delete_last()
{
node *current=new node;
node *previous=new node;
current=head;
while(current->next!=NULL)
{
previous=current; 
current=current->next;
}
tail=previous;
previous->next=NULL; 
delete current;
}

void delete_position(int pos)
{
node *current=new node;
node *previous=new node;
current=head;
for(int i=1;i<pos;i++)
{
previous=current;
current=current->next;
}
previous->next=current->next;
}
};

int main()
{
list obj; 
obj.create_node(25); 
obj.create_node(50);
obj.create_node(90); 
obj.create_node(40);
obj.create_node(60);
obj.create_node(70);
obj.create_node(30); 
obj.create_node(80); 
obj.create_node(10);

cout<<"\n Displaying All nodes	\n";
obj.display();

cout<<"\n Deleting At Start	\n";
obj.delete_first();
obj.display();

cout<<"\n Deletion At End	\n";
obj.delete_last(); 
obj.display();

cout<<"\n Deletion After a Particular Node	\n";
obj.delete_position(4);
obj.display();
 
return 0;
}

