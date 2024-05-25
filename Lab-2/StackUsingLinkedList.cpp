#include<iostream>
#include "SinglyLinkedList.h"
using namespace std;

class StackUsingLinkedList{
    private:
        SinglyLinkedList list;
        Node *top;
    public:
        StackUsingLinkedList(){
            top=NULL;
        }

        bool push(int x){
            list.addToHead(x);
            top = list.getHead();
            cout << x << " pushed to stack\n";
            return true;
        }

        int pop(){
            if(list.isEmpty()){
                cout << "Stack is empty\n";
                return -1;
            }
            int x = top->data;
            list.removeFromHead();
            top = list.getHead();
            return x;
        }

        int peek(){
            if (list.isEmpty()){
                cout << "Stack is empty\n";
                return -1;
            }
            int x = top->data;
            return x;
        }

        bool isEmpty(){
            return list.isEmpty();
        }

        void printedList(){
            list.printList();
        }
};

int main() {
    StackUsingLinkedList Stack;

    Stack.push(41);
    Stack.push(6); 
    Stack.push(20);

    cout<<"Stack :  ";
    Stack.printedList();

    cout<<Stack.pop()<<" popped from stack"<<endl;
    cout<<Stack.pop()<<" popped from stack"<<endl;

    cout<<"Stack :  ";
    Stack.printedList();

    cout<<"Checking if stack is empty: "<<Stack.isEmpty()<<endl;

    Stack.push(19);
    Stack.push(50);

    cout<<"Stack :  ";
    Stack.printedList();
    
    cout<<Stack.peek()<<" is at the top of the stack"<<endl;
    cout<<Stack.pop()<<" popped from stack"<<endl;
    cout<<Stack.pop()<<" popped from stack"<<endl;
    cout<<Stack.pop()<<" popped from stack"<<endl;
    cout<<Stack.pop()<<" popped from stack"<<endl;

    return 0;
}