#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};

class linkedList{
	struct node* start;
	public:
		linkedList(){
			start = NULL;
		}
		node* createNode(){
			struct node *temp = new node();
			if(!temp){
				cout<<"Error: "<<endl;
				return NULL;
			}
			return temp;
		}
	bool insAtHead(int val){
//		int data;
//		cout<<"Enter data: ";cin>>data;
		node * newNode = createNode();
		newNode->data = val;
//		if(start = NULL){
//			start = newNode;
//			newNode->next=NULL;
//		}
		else{
			newNode->next = start;
			start = newNode;
		}
		cout<<val<<" inserted"<<endl;
		return true;
	}	
	void display(){
		node * temp = start;
		if (start == NULL){
			cout<<"list is empty"<<endl;
		}
		else{
			cout<<endl<<"LINKED LIST::"<<endl;

			while (temp !=NULL){
				cout<<temp->data<<"->";
				temp=temp->next;
				cout<<"sth";
			}		
		}
	}
};


int main(){
	linkedList ob;int choice;
	ob.insAtHead(20);
	ob.insAtHead(230);
	ob.insAtHead(2440);
	ob.display();
}
