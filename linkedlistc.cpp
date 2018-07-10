#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;     // self referential classes
    Node(int d){
        data = d;
        next = NULL;
    }
};

Node* createLL(){
    int x;
    Node* head = NULL;
    Node* tail = NULL;

    while(x){
        cin >> x;
        if (x == -1) break;
        Node* newNode = new Node(x);
        if (head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            // tail->next = newNode;
            (*tail).next = newNode;
            tail = tail->next;
        }
    }
    return head;
}

void printLL(const Node* head){
    const Node* cur = head;
    while(cur){
        cout << cur->data << "-->";
        // cur->data = 2;
        cur = cur->next;    // cur
    }
    cout << endl;
}

Node* deleteNode(Node* head, int Delete){
Node* curr=head;
Node* prev=head;
	if(curr==NULL)
		return;

	while(curr!=NULL){
		if(curr->data==Delete)
	{
		prev->next=curr->next;
		curr=prev->next;
	}

		else
		{
          prev=curr;
          curr=curr->next;

		}



	}
	
	
}


//??? mergeSort(Node* head){}
//??? quickSort(Node* head){}
//??? bubbleSort(Node* head){}
int addone(Node* head){
	Node *curr=head;
	if(head==NULL)
		return 0;
	while(head!=NULL){
		curr=curr->next;
	}
        int x=curr->data;
        curr->data=x+1;
        return curr;
	

}
//??? deleteDuplicates(Node* head){}
//??? findLoop(Node* head){}
//??? removeLoop(Node* head){}


int main(){
    Node* head = createLL();
    deleteNode(head,5);
    
    addone(head);
       printLL(head);
} 