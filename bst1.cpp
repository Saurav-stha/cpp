#include<iostream>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
	node(int val){
		data=val;left=right=NULL;
	}
};
node* insert(node*root,int val){
	if(root==NULL){
		return new node(val);
	}
	if(val<root->data){
		root->left=insert(root->left,val);
	}else if(val>root->data){
		root->right = insert(root->right,val);
	}
	return root;
}
void inorder(node* root){
	if(root!=NULL){ inorder(root->left);
	cout<<root->data<<"\t";
		inorder(root->right);
	}
}
int main(){
	node* root = NULL;
	int choice,key;
	
	while(1){
		//menu
		cout<<"1.insert a node"<<endl;
		cout<<"2.inorder"<<endl;
		cout<<"7.Exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter key: ";
				cin>>key;
				root=insert(root,key);
				break;
			case 2:
				cout<<endl<<endl;
				inorder(root);
				cout<<endl<<endl;
				break;
			case 7:
				exit(0);break;
		}
	}
}
