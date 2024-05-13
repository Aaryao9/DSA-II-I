#include<iostream>
#include "SinglyLinkedList.h"
using namespace std;

int main() {
    SinglyLinkedList list;
    cout<<"Initialized the list:    ";
    list.isEmpty() ? cout << "Empty" : cout << "Not Empty";
    cout<<endl;
    cout<< "Adding to the head of the list"<<endl;
    list.addToHead(2);
    list.printList();
    list.addToHead(4);
    list.printList();
    list.addToHead(3);
    list.printList();
    cout << "Adding to the tail of the list"<<endl; 
    list.addToTail(9);
    list.printList();
    list.addToTail(1);
    list.printList();
    list.addToTail(5);
    list.printList();



    cout<<"Searching for 3: in the list:    ";
    list.search(3) ? cout << "Found" : cout << "Not Found";
    cout<<endl;
    cout<<"Pointer to the node for 3:    ";
    cout<<list.retrieve(3)<<endl;

    cout << "Adding 7 after 3 and 8 after 9"<<endl;
    list.add(7, list.retrieve(3));
    list.add(8, list.retrieve(9));
    list.printList();

    cout << "Removing from the head of the list"<<endl;
    list.removeFromHead();
    list.printList();

    cout << "Removing 4 from the list"<<endl;
    list.remove(4);
    list.printList();

    cout<<"Final list:"<<endl;
    list.printList();
    
    return 0;
}