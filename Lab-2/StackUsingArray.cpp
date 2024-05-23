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
    cout<<s.isempty()<<endl;
    cout<<s.search(20)<<endl;
    cout<<s.search(40)<<endl;   
}