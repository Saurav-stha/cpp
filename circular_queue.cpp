//#include<iostream>
//using namespace std;
//#define max 7
//
//class queue{
//	private:
//		int myqueue[max],front,rear;
//	public:
//		queue(){
//			front=-1;rear=-1;
//		}
//		bool isFull(){
//			if((front==0 && rear==max-1) || (front=rear+1)){
//				return true;
//			}return false;
//		}
//		bool isEmpty(){
//			if(front==-1 && rear==-1){
//				return true;
//			}return false;
//		}
//		void insert(int val){
//			if (isFull()){
//				cout<<endl<<"Queue is full!!"<<endl;
//			}else{
//				if(front==-1 && rear==-1){
//					front=0;rear=0;
//					rear++; rear = rear%max;
//				}
//				myqueue[rear] = val;
//				cout<<val<<" ";
//			}
//		}
//		void disp(){
//			int i;
//			if(isEmpty()){
//				cout<<"Queue is empty"<<endl;
//			}
//			else{
//				cout<<endl<<"Front: "<<front<<endl<<"Queue elements: "<<endl;
//				for (i=front;i<=rear;i++){
//					cout<<myqueue[i]<<"\t";
//				}
//				cout<<endl<<"Rear: "<<rear<<endl;
//			}
//		}
//};
//main(){
//	queue myq;
//	myq.insert(10);
//	myq.insert(13);
//	myq.insert(16);
//	
//	myq.disp();
//}
//
#include<iostream>
using namespace std;
class CircularQueue{
	int front ,rear,count;
	int * queue;
	int size;
	public:
		CircularQueue(int size){
			this->size=size;
			queue= new int(size);
			front=0;
			count=0;
			rear=-1;
		}
		bool isFull(){
			if(count==size){
				cout<<"Circular Queue is Full"<<endl;
				return true;
			}
			return false;
		}
		bool isEmpty(){
			if(count == 0){
				cout<<"Circular Queue is Empty"<<endl;
				return true;
			}
			return false;
		}
		bool insertQueue(int data){
			if(isFull()){
				return false;
			}
			rear=(rear+1)%size;
			queue[rear]=data;
			count++;
			cout<<"Data Successfully Added:"<<data<<endl;
			return true;
		}
		bool deleteQueue(){
			if(isEmpty()){
				return false;
			}
			int data;
			data=queue[front];
			front=(front+1)%size;
			count--;
			cout<<"Data Successfully Deleted:"<<data<<endl;
			return true;
		}
		void display(){
			if(!isEmpty()){
				cout<<"Circular Queue Elements are:"<<endl;
				int i=front;
				while(i!=rear){
					cout<<queue[i]<<endl;
					i=(i+1)%size;
				}
				cout<<queue[rear]<<endl;
			}
		}
};
int main(){
	int size;
	cout<<"Enter the size of the queue"<<endl;
	cin>>size;
	CircularQueue ob(size);
	ob.insertQueue(10);
	ob.insertQueue(2);
	ob.insertQueue(3);
	ob.insertQueue(4);
	ob.insertQueue(5);
	cout<<"Dequeing.."<<endl;
	ob.deleteQueue();
	ob.display();
}
