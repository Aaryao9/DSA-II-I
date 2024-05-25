#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
    ~Node() {}
};

class SinglyLinkedList {
public:
    Node* head;
    Node* tail;
    SinglyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    Node* getHead() {
        return head;
    }
    Node* getTail() {
        return tail;
    }

    bool isEmpty()  {
        return head == NULL;
    }

    void addToHead(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }   

    void addToTail(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void add(int data, Node* predecessor) {
        if (predecessor == NULL){
            return;
        } 
        if (predecessor == tail) {
            addToTail(data);
        }

        Node* newNode = new Node(data);
        newNode->next = predecessor->next;
        predecessor->next = newNode;
    }

    void removeFromHead() {
        if (isEmpty()) {
            return;
        }

        Node* temp = head;
        if (head == tail) {
            head = tail = NULL; 
        } else {
            head = head->next;
        }
        delete temp;
    }

    void remove(int data) {
        Node* current = head;
        Node* previous = NULL;

        while (current != NULL && current->data != data) {
            previous = current;
            current = current->next;
        }

        if (current == NULL) {
            return;
        }

        if (current == head) {
            removeFromHead();
        } else {
            previous->next = current->next;
            if (current == tail) {
                tail = previous;
            }
            delete current;
        }
    }

    Node* retrieve(int data)  {
        Node* current = head;
        while (current != NULL && current->data != data) {
            current = current->next;
        }
        return current;
    }

    bool search(int data)  {
        return retrieve(data) != NULL;
    }

    void printList()  {
        Node* current = head;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

#endif
