#include<iostream> 
using namespace std;

struct node{
	int data;
	node *next;
};

void InsertAtHead(node* &head){
	int data;
	cout<<"enter data:";cin>>data;
	node* n= new node;
	n->data=data;
	n->next = head;
	head=n;	
}
void DelAtHead(node* &head){
	
}
void InsertAtRear(node* &head){
	node* n = new node;
	node* temp = head;
	int data;
	cout<<"enter data:";cin>>data;
	n->data=data;
	while(temp->next!= NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->next=NULL;
}
void InsertB4Node(node* &head,int val,int pos){
	node* n = new node;
	node* temp = head;
	if (pos>4){
		return;
	}
	for( int i=2;i<=pos;i++){
		if(temp->next!=NULL){
			temp=temp->next;
		}
	}
	n->next=temp->next;
	temp->next=n;
}
void disp(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"-";
		temp=temp->next;
	}
	cout<<"Null"<<endl;
}

void delFromHead(node* &head){
//	node* temp=head;
	head=head->next;
}
void delFromRear(node* &head){
	node* temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	temp->next=NULL;	
}
void delAfterNode(node* &head,int pos){
	node* temp=head;
	if (pos>4){
		cout<<"invalid position given"<<endl;
		exit;
	}
	for(int i=2;i<=pos;i++){
		if(temp->next!=NULL){
			temp=temp->next;
		}
	}
	temp->next=temp->next->next;
}
int main(){
	node* head= NULL;
	InsertAtHead(head);
	InsertAtHead(head);
	
//	InsertB4Node(head,3,4);
//	
	InsertAtRear(head);
	InsertAtRear(head);
//	
//	disp(head);
//	
//	cout<<"\n\n";
//
	delFromHead(head);
////	
////	delFromRear(head);
//	
//	delAfterNode(head,32);
	disp(head);
}
