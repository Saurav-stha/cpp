#include<iostream>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node* next;
};

void atHead(node* &head){
	int val;
	cout<<"enter data: ";
	cin>>val;
	node* n =new node;
	n->data=val;
	n->next=head;
	head=n;
}
void atTail(node* &head){
	node* temp= head;
	node* n = new node;
	int val;cout<<"Enter data: ";cin>>val;
	n->data=val;
	n->next=NULL;
	if (head == NULL){
		head=n;
	}else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
	}
}
void beforeNode(node* &head,int target,int val){
	node * temp = head;
	node* n=new node;
	n->data=val;
//	n->next=NULL;
	if (head->data == target){
		n->next=head;
		head=n;
	}else{
		while (temp->next->data!=target && temp->next != NULL){
			temp=temp->next;
		}
		if(temp->next==NULL){
			cout<<"No such nodes"<<endl;
			delete n;
		}else{
			n->next=temp->next;
			temp->next = n;
		}	
	}	
}

void display(node* &head){
	node* temp= head;
	cout<<endl<<"linked list is "<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" - ";
		temp=temp->next;
	}
	cout<<" end"<<endl;
}

void delAtHead(node* &head){
	if(head!=NULL){
	
		node * temp = head;
		head=temp->next;
	}else{
		cout<<"Already empty"<<endl;
	}
}
void delAtTail(node* &head){
	node* temp = head;
	if(head!=NULL){
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		temp->next=NULL;
	}else{
		cout<<"Already empty"<<endl;
	}
}

void delAfterNode(node* &head,int target){
	node * temp = head;
	while (temp != NULL){
		if(temp->data==target){
//			node * delNode=temp->next;
			temp->next=temp->next->next;
//			delete delNode;
//			return;
		}
		temp=temp->next;
	}
	cout<<"No such nodes!!!"<<endl;
}
int main(){
	node* head = NULL;
	delAtHead(head);
//	atTail(head);
	atHead(head);
	atHead(head);
	atTail(head);
	beforeNode(head,20,30);
	
	display(head);
	
	delAtHead(head);
	delAtTail(head);
	delAfterNode(head,50);
	display(head);
}
