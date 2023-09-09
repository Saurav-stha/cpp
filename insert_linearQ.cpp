#include<iostream>
using namespace std;
class Que{
	int len;
	int arr[3];
	public:
		Que(){
			int len = 0;
		}
		void insert(int val,int pos){
			if(!(len>3))
			{
				for (int i=len;i>=pos;i--){
					arr[i+1]=arr[i];
				}
				arr[pos]=val;
				len++;
			}
			else{
				cout<<"\nbad one";
			}	
		}
		int del(int pos){
			if(0<=pos<len){
				int item=arr[pos];
				for (int i=pos;i<=len;i++){
					arr[i]=arr[i+1];
				}
				len--;
				return item;
			}
		}
		void display(){
			cout<<endl<<"The list is:  ";
			for(int i=0;i<len;i++){
				cout<<"\t"<<arr[i];
			}
		}
};

main(){
	Que q;
	q.insert(1, 0); // Insert an element at position 0
    q.insert(2, 1); // Insert an element at position 1
    q.insert(3, 2); // Insert an element at position 2
    q.display();
//	q.insert(3,2);
	q.insert(0,0);
	q.display();
	cout<<"\n\ndel item: "<<q.del(1);
	q.display();
	
}
