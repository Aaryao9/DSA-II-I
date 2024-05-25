#include<iostream>
#include "queue.h"  
using namespace std;
int main()

{
    Listqueue s;
    s.enqueue(10);
    s.enqueue(20); 
    s.enqueue(30);
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;
    
    s.enqueue(40);
    s.enqueue(50);
    
    s.isempty();
    cout<<s.back()<<endl;
    cout<<s.front()<<endl;
    s.isfull();
}