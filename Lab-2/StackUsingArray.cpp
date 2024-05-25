#include <iostream>
using namespace std;

class StackUsingArray{
    private:
        int *arr;
        int arrSize;
        int topIndex;
    public:
        StackUsingArray(int size){
            topIndex=-1;
            arrSize=size;
            arr= new int(arrSize);
        }
        
        bool push(int x) {
            if (isFull()) {
                cout << "Stack is FUll !!! Can't Push.\n";
                return false;
            }
            else {
                arr[++topIndex] = x;
                cout <<x << " pushed to stack\n";
                return true;
            }   
        }
        int pop() {
            if (isEmpty()) {
                cout << "Stack is empty!!! Nothing to pop.\n";
                return -1;
            } else {
                return arr[topIndex--];
            }
        }

        int top() {
            if (isEmpty()){
                cout << "Stack is empty\n";
                return 0; 
            }
            return arr[topIndex];
        }

        bool isEmpty() {
            return topIndex==-1;
        }
        
        bool isFull() {
            return topIndex==arrSize-1;
        }

        void printStack(){
            cout<<"Stack : ";
            for(int i=0; i<=topIndex; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    
};

int main(){
    StackUsingArray s(3);

    s.push(17);
    s.push(99); 
    s.push(30);
    s.push(40);

    s.printStack();
    s.isFull();

    cout<<s.top()<<" is at the top."<<endl;

    cout<<s.pop()<<" is popped from stack"<<endl;
    cout<<s.pop()<<" is popped from stack"<<endl;

    s.printStack();
    s.isEmpty();

    cout<<s.pop()<<" is popped from stack"<<endl;
    cout<<s.pop()<<" is popped from stack"<<endl;
}