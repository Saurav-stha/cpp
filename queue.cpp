//Queue implementation using array
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX_SIZE = 100;

class QueueOverFlowException
{
public:
   QueueOverFlowException()
   {
       cout << "Queue overflow" << endl;
   }
};

class QueueEmptyException
{
public:
   QueueEmptyException()
   {
       cout << "Queue empty" << endl;
   }
};

class ArrayQueue
{  
private:
   int data[MAX_SIZE];
   int front;
   int rear;
public:
   ArrayQueue()
   {
       front = -1;
       rear = -1;
   }      
 
   void Enqueue(int element)
   {
       // Don't allow the queue to grow more
       // than MAX_SIZE - 1
       if ( Size() == MAX_SIZE - 1 )                 
           throw new QueueOverFlowException();

       data[rear] = element;

       // MOD is used so that rear indicator
       // can wrap around
       rear = ++rear % MAX_SIZE;
   }      

   int Dequeue()
   {          
       if ( isEmpty() )
           throw new QueueEmptyException();

       int ret = data[front];

       // MOD is used so that front indicator can wrap around
       front = ++front % MAX_SIZE;

       return ret;   
   }      
 
   int Front()
   {          
       if ( isEmpty() )
           throw new QueueEmptyException();

       return data[front];
   }
 
   int Size()
   {
       return abs(rear - front);
   }
 
   bool isEmpty()
   {
       return ( front == rear ) ? true : false;
   }
};

int main()
{  
   ArrayQueue q;
   try {
       if ( q.isEmpty() )
       {
           cout << "Queue is empty" << endl;
       }

       q.Enqueue(100);
       q.Enqueue(200);
       q.Enqueue(300);

       cout << "Size of queue = " << q.Size() << endl;

       cout << q.Front() << endl;
       cout << q.Dequeue() << endl;
       cout << q.Dequeue() << endl;
       cout << q.Dequeue() << endl;
   }
   catch (...) {
       cout << "Some exception occured" << endl;
   }
}

