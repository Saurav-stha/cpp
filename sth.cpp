//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 100
//
//class CircularQueue {
//private:
//    int front, rear;
//    int arr[MAXSIZE];
//
//public:
//    CircularQueue() {
//        front = -1;
//        rear = -1;
//    }
//
//    bool isFull() {
//        return ((rear + 1) % MAXSIZE) == front;
//    }
//
//    bool isEmpty() {
//        return (front == -1 && rear == -1);
//    }
//
//    void enqueue(int value) {
//        if (isFull()) {
//            cout << "Queue is full. Cannot enqueue." << endl;
//        } else {
//            if (isEmpty()) {
//                front = 0;
//                rear = 0;
//            } else {
//                rear = (rear + 1) % MAXSIZE;
//            }
//            arr[rear] = value;
//        }
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty. Cannot dequeue." << endl;
//        } else {
//            if (front == rear) {
//                front = -1;
//                rear = -1;
//            } else {
//                front = (front + 1) % MAXSIZE;
//            }
//        }
//    }
//
//    int peek() {
//        if (isEmpty()) {
//            cout << "Queue is empty. Cannot peek." << endl;
//            return -1; // You can choose an appropriate value to return in case of an empty queue.
//        }
//        return arr[front];
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//        } else {
//            int i = front;
//            do {
//                cout << arr[i] << " ";
//                i = (i + 1) % MAXSIZE;
//            } while (i != (rear + 1) % MAXSIZE);
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    CircularQueue cq;
//    cq.enqueue(1);
//    cq.enqueue(2);
//    cq.enqueue(3);
//    cq.enqueue(4);
//
//    cout << "After enqueued: ";
//    cq.display();
//
//    cq.dequeue();
//    cq.dequeue();
//
//    cout << "After dequeued: ";
//    cq.display();
//
//    cout << "Front element: " << cq.peek() << endl;
//
//    return 0;
//}
#include<iostream>
#define MAXSIZE 100
using namespace std;

class circularQueue{
        private:
            int front,rear;
            int arr[MAXSIZE];
            
            public:
                circularQueue(){
                        front = rear = -1;
                }
                
                bool isFull(){
                        return(((rear+1)% MAXSIZE)==front);
                }
                
                bool isEmpty(){
                        return(front == -1  &&  rear == -1);
                }
                
                void enqueue(int value){
                        if(isFull()){
                            cout<<"Already full cant insert anything"<<endl;
                        }else{
                        	if(isEmpty()){
                        		front =0;rear=0;
							}
							else
                            	rear = (rear + 1) % MAXSIZE;
                        }
                        arr[rear] = value;
                }
                
                void dequeue(){
                        if(isEmpty()){
                            cout<<"Already empty"<<endl;
                        }else{
                            if(front == rear){
                                front = rear =-1;
                            }else{
                              front =  (front +  1) % MAXSIZE;
                            }
                        }
                }
                
                void display(){
                        if(isEmpty()){
                            cout<<"Notthing to display"<<endl;
                        }else{
                            for(int i =front ;i<=rear ;i++){
                                    cout<<arr[i]<<endl;
                            }
                        }
                }
};
int main(){
    circularQueue  cq;
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.enqueue(4);
    cout<<"After enqueued"<<endl;
    cq.display();
    
    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
    cout<<"After dequeue"<<endl;
    cq.display();
    return 0;
}
