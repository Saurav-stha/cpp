#include<iostream>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
};

class bst{
	node* root;
	bst(){
		root = NULL;
	}
	node* createNode(int val){
		root->data=val;root->left=NULL;root->right=NULL;
	}
	void insert(int val){
		if(root==NULL){
			root= createNode(val);
		}
		if(val<root->data){
			root->left=insert(root->left,val);
		}else if(val>root->data){
			root->right = insert(root->right,val);
		}
	}
	void inorder(){
		if(root!=NULL){ 
			inorder(root->left);
			cout<<root->data<<"\t";
			inorder(root->right);
		}
		return;
	}
	void preorder(){
		if(root!=NULL){
			preorder(root->left);preorder(root->right);cout<<root->data<<"\t";
		}
	}
	void postorder(){
		if(root!=NULL){
			cout<<root->data<<"-";
			postorder(root->left);
			postorder(root->right);
		}
	}
	void deleteNode(int val){
		if(root==NULL){ 
			cout<<"Nothiing to delete here!!";return;}	
	}
};

int main(){
	bst b;
	int choice,key;
	
	while(1){
		//menu
		cout<<"1.insert a node"<<endl;
		cout<<"2.inorder"<<endl;
		cout<<"3.preorder"<<endl;
		cout<<"4.postorder"<<endl;
		cout<<"7.Exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter key: ";
				cin>>key;
				insert(root,key);
				break;
			case 2:
				cout<<endl<<endl;
				b.inorder(root);
				cout<<endl<<endl;
				break;
			case 3:
				cout<<endl;
				b.preorder(root);
				cout<<endl;
				break;
			case 4:
				cout<<endl;
				b.postorder(root);
				cout<<endl;
				break;
			case 7:
				exit(0);break;
		}
	}
}
