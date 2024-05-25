#include<iostream>
using namespace std;
class Arrayqueue{
    private:
        int *arr;
        int capacity;
        int FrontIndex;
        int rearindex;
    public:
        Arrayqueue(int capacity){FrontIndex=-1;
        rearindex=-1;
        capacity=capacity;
        arr= new int(capacity);}
        void enqueue(int x)
        {  if(rearindex<capacity)
            {
                if(FrontIndex==-1){
            FrontIndex=0;
            rearindex=0;   
             
            }
            else{rearindex++;}

        arr[rearindex]=x;
        cout<<arr[rearindex];}
        else{
            cout<<"cannot insert more elements";
        }    

        }
        int dequeue()
        { if(FrontIndex<=rearindex){
         int a;
         a=arr[FrontIndex];
         FrontIndex++;
         return a;}
         else{
          return -1;}
        }
        int Front()
        { if(FrontIndex<=rearindex){
            return arr[FrontIndex];
        }
        else{
            return -1;
        }
        }
        void isempty()
        {
            if (rearindex==-1){
                std::cout<<"queue is empty";
            } else{
                std::cout<<"queue is not empty";
            }
        }
        
       void isfull()
       { if (rearindex==capacity-1)
       {
           std::cout<<"queue is full";
       }
       else{
           std::cout<<"not full";

       }}


        int back()
        {
            if (FrontIndex<=rearindex){
                return arr[rearindex];
            }
            else{
                return -1;
            }
        }   
    
};

class node{
    public: 
    int data;
    node *next;

};
class Listqueue:public node{

private:
node *Front;
node *rear;
public:
Listqueue(){
    Front=nullptr;
    rear=nullptr;
}
void enqueue(int x){
    node *temp;
    temp->data=x;
    temp->next=nullptr;
    if(Front==nullptr){
        Front=temp;
        rear=temp;
        cout<<Front->data;
    }
    else{
        rear->next=temp;
        rear=temp;
        cout<<rear->data;
    }
}
int dequeue(){
    node  *temp;
    temp=Front;
    if (Front==nullptr){
        return -1;
    }
    else if (Front==rear)
    {
        Front=nullptr;
        rear=nullptr;
        return temp->data;
    }
     else {
    
    Front=Front->next;
    int a;
    a=temp->data;   
    delete temp;
     return a;
    }
}
   
int back(){
    if(rear!=nullptr){
    return rear->data;
    }else{
        return -1;
    }
}
void isempty()
    {
        if (Front==nullptr){
            std::cout<<"queue is empty";
        }
        else{
            std::cout<<"queue is not empty";
        }
    }
void isfull()
    {
        if (Front!=nullptr){
            std::cout<<"queue is full";
        }
        else{
            std::cout<<"queue is not full";
        }
    }
int front(){
    if(Front!=nullptr){
    return Front->data;
    }else{
        return -1;
    }
}

bool search(int x){
    node *temp;
    temp=Front;
    if(Front==nullptr){
       return false;
    }
    else{
        while(temp->next!=nullptr)
        {   if(temp->data==x)
                { return true;}
            
            temp=temp->next;}

            if (temp->data==x)
             {return true;}
        return false;
    }
}
};

