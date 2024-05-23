#include<iostream>
#include "queue.h"  
using namespace std;
int main()

{
    Listqueue s;
    s.push(10);
    s.push(20); 
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.search(20)<<endl;
    s.push(40);
    s.push(50);
    cout<<s.search(40)<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.top()<<endl;
}