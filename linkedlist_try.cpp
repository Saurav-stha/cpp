#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node* Next;
};
class Linked_List{
	struct Node* start;
	public:
		Linked_List(){
			start=NULL;
		}
		Node * createNode(){
			struct Node* temp = new Node();
			if(!temp){
				cout<<"Error Occured"<<endl;
				return NULL;
			}
			return temp;
		}
		void insert_at_beginning(){
			int data;
			cout<<"Enter the data to be inserted at beginning:"<<endl;
			cin>>data;
			Node *new_node=createNode();
			new_node->data=data;
			if(start==NULL){
				start=new_node;
				new_node->Next=NULL;
			}
			else{
				new_node->Next=start;
				start=new_node;
			}
			cout<<data<<" inserted  successfully at beginning."<<endl;
		}
		void insert_at_last(){
			int value;
			cout<<"Enter the value to be inserted at last:"<<endl;
			cin>>value;
			Node * new_node=createNode();
			new_node->data=value;
			if(start==NULL){
				start=new_node;
				new_node->Next=NULL;
			}
			else{
				Node * target=start;
				while(target->Next!=NULL){
					target=target->Next;
				}
				target->Next=new_node;
				new_node->Next=NULL;
				cout<<value<<" added successfully at last."<<endl;
			}
		}
		void display(){
			Node *temp=start;
			if(start==NULL){
				cout<<"No data in the linked list!"<<endl;
			}
			else{
				cout<<"The data in linked list are:"<<endl;
				while(temp!=NULL){
					cout<<temp->data<<endl;
					temp=temp->Next;
				}
			}
		}

		void insert_after_node(){
			int value,nodeValue;
			cout<<"Enter the node data:"<<endl;
			cin>>nodeValue;
			Node *target=start;
			while(target && target->data){
				target=target->Next;
			}
			if(target== NULL){
				cout<<"No such node and node data"<<endl;
			}
			cout<<"Enter the data to be added:"<<endl;
			cin>>value;
			Node *newNode=createNode();
			newNode->data=value;
			newNode->Next=target->Next;
			target->Next=newNode;
		}
		void insert_before_node(){
			int data, nodeData;
			cout << "Enter data of target node:" << endl;
			cin >> nodeData;
			Node *target = start;
			Node *preTarget = NULL;
			while (target && target->data != nodeData){
			        preTarget = target;
			        target = target->Next;
			}
			if (target == NULL){
			        cout << "No such node ERROR!!!" << endl;
			}

			cout << "Enter data to add:" << endl;
			cin >> data;

			 Node *newNode = createNode();
			 newNode->data = data;
			 if (target == start){
			        newNode->Next = start;
			        start=newNode;
			        cout << "Insertion SUCCESSFULL!!" << endl;
			 }
			 newNode->Next = target;
			 preTarget->Next = newNode;
			 cout << "Insertion SUCCESSFULL!!" << endl;
		}
		void delete_at_first(){
			if(start=NULL){
				cout<<"No data to be deleted"<<endl;
			}
			Node *target=start;
			start=start->Next;
			cout<<target->data<<" successfully deleted."<<endl;
			delete target;
		}
		void delete_at_last(){
			if(start==NULL){
				cout<<"No data to be deleted"<<endl;return;
			}
			Node *target=start;
			Node *pretarget=NULL;
			while(target->Next!=NULL){
				pretarget=target;
				target=target->Next;
			}
			pretarget->Next=NULL;
			cout<<target->data<<" successfully deleted."<<endl;
			delete target;
		}
		void delete_node(){
			int nodeData;
			cout<<"Enter the data of the target node:"<<endl;
			cin>>nodeData;
			Node *target=start;
			Node *preTarget=NULL;
			while(target->data!=nodeData){
				preTarget=target;
				target=target->Next;
			}
			if(target==NULL){
				cout<<"Node and data not found!"<<endl;
			}
			if(start==NULL){
				delete_at_first();
			}
			if(target->Next==NULL){
				delete_at_last();
			}
			preTarget->Next=target->Next;
			cout<<target->data<<" successfully deleted."<<endl;
			delete target;
		}
		void search(){
			int count = 0;
			int val;
			cout<<"Enter value to search: ";
			cin>>val;
			if(start == NULL){
				cout<<" M T "<<endl;
			}
			else{
				Node *temp=start;
				if(start->data==val){
					cout<<"Its in the first position HAIYAA"<<endl;
					return;
				}
				while(temp->Next!=NULL){
					if((temp->data)==val){
						cout<<"found it: at"<<count;
						return;
					}
					count++;
					temp=temp->Next;
				}
				cout<<"Not in the list yoii"<<endl;
			}
			
		}
		~Linked_List(){
			delete start;
		}
};
int main(){
	Linked_List ob;
	int choice;
	    while (1)
	    {
	        cout << "\nSelect one of the following:-:-" << endl;
	        cout << "1) Insert at Beginning" << endl;
	        cout << "2) Insert at Last" << endl;
	        cout << "3) Insert before Node" << endl;
	        cout << "4) Insert after Node" << endl;
	        cout << "5) Delete at first" << endl;
	        cout << "6) Delete at last" << endl;
	        cout << "7) Delete a certain Node" << endl;
	        cout << "8) Display node data" << endl;
	        cout << "9) exit" << endl;
	        cout << "10) search"<<endl;
	        cout << "Choose one(1--10)-" << endl;
	        cin >> choice;
	        switch (choice)
	        {
	        case 1:
	            ob.insert_at_beginning();
	            break;
	        case 2:
	            ob.insert_at_last();
	            break;
	        case 3:
	            ob.insert_before_node();
	            break;
	        case 4:
	            ob.insert_after_node();
	            break;
	        case 5:
	            ob.delete_at_first();
	            break;
	        case 6:
	            ob.delete_at_last();
	            break;
	        case 7:
	            ob.delete_node();
	            break;
	        case 8:
	            ob.display();
	            break;
	        case 9:
	            cout << "Exited succesfully......" << endl;
	            exit(0);
	            break;
	        case 10:
	        	ob.search();
	        	break;
	        default:
	            cout << "choose a valid number:" << endl;
	            break;
	        }
	    }
	    
	    return 0;
	}
	
