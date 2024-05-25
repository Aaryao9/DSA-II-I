#include <iostream>
#include "stack.h"
using namespace std;
int main(){
    Arraystack s(20);
    s.push(10);
    s.push(20); 
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    s.isempty();
    s.isfull();
}