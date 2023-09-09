#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	node* next;
};
class LinkedListDemo{
	struct node* start;
	public:
		LinkedListDemo(){
			start = NULL;
		}
		struct node* CreateNode()
		{
			struct node *temp=new  node();
			if(!temp)
			{
				cout<<"Unsuccessful node creation"<<endl;
				return NULL;
			}
			temp->next = NULL;
			return temp;
		}
		bool insertBegining(int data)
		{
			node *temp = CreateNode();
			if(!temp)
			{
				return false;
			}
			temp->data = data;
			temp->next = start;
			start = temp;
			//cout<<temp->data;
			return true;
		}
		bool addAtLast(int data)
		{
			struct node* temp = CreateNode();
			if(!temp)
			{
				return false;
			}
			temp->data = data;
			struct node* target = start;
			while(target->next!=NULL)
			{
				target = target->next;
			}
			target->next = temp;
			return true;
		}
		bool addAfterNode(int data, int nodeData)
		{
			struct node* temp = CreateNode();
			if(!temp)
			{
				return false;
			}
			temp->data = data;
			struct node* target = start;
			while(target!=NULL)
			{
				if(target->data == data)
				{
					break;
				}
				target = target->next;
			}
			if(!target)
			{
				cout<<"Node not found";
				return false;
			}
			temp->next= target->next;
			target->next = temp;
			return true;
		}
		
		void display()
		 {
			 struct node *temp = start;
			 if(!temp)
			 {
			 	cout<<"No data"<<endl;
			 	return;
			 }
			while(temp!= NULL)
			{
				cout<<temp->data<<endl;
				temp= temp->next;
			}
		}
		
		
};

int main()
{
	 LinkedListDemo *list = new LinkedListDemo();
	int choice;
	
	list->insertBegining(1000);
	list->insertBegining(2000);
	list->addAtLast(3000);
	list->addAtLast(5000);
	list->display();
	/*
	while (true)
		 {
			cout<<"select your choice"<<endl;
			cout<<"1. Insert at first"<<endl;
			cout<<"2. Insert after a node"<<endl;
			cout<<"3. Insert at last"<<endl;
			cout<<"4. Delete  at first"<<endl;
			cout<<"5. Delete  a particular node"<<endl;
			cout<<"6. Delete  at last"<<endl;
			cout<<"7. Display"<<endl;
			cout<<"8. Search Data"<<endl;
			cout<<"9. Exit"<<endl;
			cin >> choice;
			 	 
			 switch(choice)
			 {
				 case 1:
				 {
						int data;
						cout<<"Enter data to insert"<<endl;
						cin>>data;
						if(list->insertBegining(data))
						{
							cout<<"Successful"<<endl;
						};			
						break;
				}
				/* case 2:
				 {
						int data, nodeData;
						cout<<"Enter data to insert"<<endl;
						cin>>data;
						cout<<"Enter Node's data to insert"<<endl;
						cin>>nodeData;
						if(list->insertAfterNode(data, nodeData))
						{
							cout<<"Successful"<<endl;
						};			
						break;
				}
				 case 3:
				 {
						int data;
						cout<<"Enter data to insert"<<endl;
						cin>>data;
						if(list->insertAtLast(data))
						{
							cout<<"Successful"<<endl;
						};			
						break;
				}
				case 4:
				{
						if( list->DeleteAtFirst())
						{
							cout<<"Successful"<<endl;
						}
						break;
				}	
				case 5:
				{
					int nodeData;
					cout<<"Enter the data of Node after which it is deleted"<<endl;
					cin>>nodeData;
					if( list->DeleteParticularNode(nodeData))
					{
						cout<<"Successful"<<endl;
					}
					break;
				}	
				case 6:
				{
						if( list->DeleteAtLast())
						{
							cout<<"Successful"<<endl;
						}
						break;
				}
				case 7:
				{
					list->display();
					break;
				}
				
				/*case 8:
				{
					int data;
					cout<<"Enter data to be searched"<<endl;
					cin>>data;					
					if(!list->SearchData(data))
					{
						cout<<"Unsuccessfull"<<endl;
					}
					break;
				}
				*/
			/*	case 9:
				 {
				 	delete list;
						exit(0);							
						
						break;
				}
				 
			 }
			 delete list;
			 
		 }*/
	return 0;
}

