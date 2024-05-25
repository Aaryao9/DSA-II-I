#include <iostream>
#include "queue.h"
using namespace std;
int main(){
    Arrayqueue s(20);
    s.enqueue(10);
    s.enqueue(20); 
    s.enqueue(30);
    cout<<s.dequeue()<<endl;
    cout<<s.back()<<endl;
    s.isempty();
    cout<<s.Front()<<endl; 
    s.isfull();  
}