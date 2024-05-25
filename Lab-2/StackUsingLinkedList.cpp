#include<iostream>
#include "stack.h"  
using namespace std;
int main()

{
    Liststack s;
    s.push(10);
    s.push(20); 
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.search(20)<<endl;
    s.push(40);
    s.push(50);
    cout<<s.search(40)<<endl;
    s.isempty();
    cout<<s.top()<<endl;
    s.isfull();
}