#include<iostream>
using namespace std;

class Node
{ public:

int data;
Node* next;     //self referential classes
Node(int d)
{
	data=d;
}
};

Node* createLL()
{
int x;
Node *head=NULL;
Node *tail=NULL;

while(true){
cin>>x;
if(x==-1) break;
Node* newNode = new Node(x);
if(head==NULL){
	head=newNode;
	tail=newNode;
	tail=tail->next;
}
else{
	tail->next=newNode;
	tail=newNode;
}
return head;
}
}
void printLL(Node *head){
 Node *curr=head;
	while(head!=NULL)
{
cout<<curr->data<<"-->";
curr=curr->next;

}
}



int main()
{
Node* head= createLL();



}