#include <iostream>
using namespace std;

class QueueUsingArray{
    private:
        int *arr;
        int arrSize;
        int front;
        int rear;
    public:
        QueueUsingArray(int size){
            front=rear=-1;
            arrSize=size;
            arr= new int(arrSize);
        }

        bool isEmpty() {
            return front == rear; 
        }

        bool isFull() {
            return rear == (arrSize - 1);
        }

        bool enqueue(int x){  
            if (isFull()) {
                cout << "Queue is FUll !!! Can't Enqueue.\n";
                return false;
            }
            else {
                arr[++rear] = x;
                cout <<x << " Enqueued\n";
                return true;
            }

        }

        int dequeue() {
            if (isEmpty()) {
                cout << "Queue is empty!!! Nothing to dequeue.\n";
                return -1;
            } else {
                return arr[++front];
            }
        }

        int frontElement() {
            if (isEmpty()) {
                cout << "Queue is empty.\n";
                return -1;
            } else {
                return arr[front+1];
            }
        }

        int backElement() {
            if (isEmpty()) {
                cout << "Queue is empty.\n";
                return -1;
            } else {
                return arr[rear];
            }
        }

        void printQueue(){
            cout<<"Queue : ";
            for(int i=front+1; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};  

int main(){
    QueueUsingArray Queue(4);

    Queue.enqueue(13);
    Queue.enqueue(16); 
    Queue.enqueue(39);
    Queue.enqueue(42);
    Queue.enqueue(65);

    Queue.printQueue();

    cout<<Queue.frontElement()<<" is at the front."<<endl;
    cout<<Queue.backElement()<<" is at the back"<<endl;

    cout<<Queue.dequeue()<<" Dequeued"<<endl;
    cout<<Queue.dequeue()<<" Dequeued"<<endl;

    Queue.printQueue();

    cout<<Queue.dequeue()<<" Dequeued"<<endl;
    cout<<Queue.dequeue()<<" Dequeued"<<endl;
    cout<<Queue.dequeue()<<" Dequeued"<<endl;

    return 0;
}