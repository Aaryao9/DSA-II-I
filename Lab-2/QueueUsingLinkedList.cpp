#include<iostream>
#include "SinglyLinkedList.h"
using namespace std;

class QueueUsingLinkedList {
    private:
        SinglyLinkedList list;
        Node *front;
        Node *rear;
    public:
        QueueUsingLinkedList(){
            front=nullptr;
            rear=nullptr;
        }

        void enqueue(int x){
            list.addToTail(x);
            front = list.getHead();
            rear = list.getTail();
            cout << x << " enqueued.\n";
        }

        int dequeue(){
            if(list.isEmpty()){
                cout << "Queue is empty\n";
                return -1;
            }
            int x = front->data;
            list.removeFromHead();
            front = list.getHead();
            return x;
        }

        int rearElement() {
            if (isEmpty()) {
                cout << "Queue is empty\n";
                return -1;
            }
            return rear->data;
        }

        bool isEmpty() {
            return list.isEmpty();
        }

        int frontElement() {
            if (isEmpty()) {
                cout << "Queue is empty\n";
                return -1;
            }
            return front->data;
        }

        void printList(){
            list.printList();
        }
};  


int main() {

    QueueUsingLinkedList Queue;

    Queue.enqueue(63);
    Queue.enqueue(87); 
    Queue.enqueue(66);

    cout<<"Queue :  ";
    Queue.printList();

    cout<<Queue.frontElement()<<" is at the front."<<endl;
    cout<<Queue.rearElement()<<" is at the rear"<<endl;

    cout<<Queue.dequeue()<<" is dequeued."<<endl;
    cout<<Queue.dequeue()<<" is dequeued."<<endl;

    cout<<"Queue :  ";
    Queue.printList();

    cout<<"Checking if queue is empty: "<<Queue.isEmpty()<<endl;

    cout<<Queue.dequeue()<<" is dequeued."<<endl;    
    cout<<Queue.dequeue()<<" is dequeued."<<endl;

    return 0;
}