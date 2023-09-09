#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node* prev;
};
class doubly{
	node *start;
	public:
	doubly(){
		start = NULL;
	}
	node *createNode(){
		node * temp=new node();
		return temp;
	}
	bool isEmpty(){
		return(start==NULL);
	}
	void insert_at_head(){
		int val;cout<<"enter val to be added: ";cin>>val;
		node *temp = createNode();

		temp->data=val;
		if(start==NULL){
			start = temp;
			
			temp->next=NULL;
			temp->prev=NULL;
			return;
		}
		temp->next=start;
		start =temp;
		temp->prev=NULL;
	}
	void insert_at_end(){
		int val;cout<<"enter val to be added: ";cin>>val;
		
		node *newNode =createNode();
		newNode->data=val;
		if(isEmpty()){
			newNode->prev=NULL;
			newNode->next=NULL;
			return;
		}
		node*temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
//		newNode->prev=temp;
		newNode->next=NULL;
	}
	void display(){
		node *temp=start;
		if(isEmpty()){
			cout<<"have nth"<<endl;
			return;
		}cout<<"the list is :";
		while(temp!=NULL){
			cout<<"\t"<<temp->data;
			temp=temp->next;
		}
	}
};
main(){
	doubly d;
	d.insert_at_head();
//	d.insert_at_head();
	d.insert_at_end();	
	d.display();
	
	return 0;
}
