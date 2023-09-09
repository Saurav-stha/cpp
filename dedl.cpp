#include<iostream>
using namespace std;

class node{
	int data;
	node* next;
	public:
		node(int val)
		{
			data=val;next=NULL;
		}
};
void delFromHead(node* &head){
	head=head->next;
}

int main(){
	
}
