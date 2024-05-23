
using namespace std;
class Arraystack{
    private:
        int *arr;
        int capacity;
        int topIndex;
    public:
        Arraystack(int capacity){topIndex=-1;
        capacity=capacity;
        arr= new int(capacity);}
        int push(int x)
        {while(topIndex<capacity)
           { topIndex++;
        arr[topIndex]=x;
          return 0; }   
          cout<<"Stack is full"<<endl;
          return -1;   
        }
        int pop()
        {if(topIndex>=0)
         {int a;
         a=arr[topIndex];
         topIndex--;
         return a;}
            cout<<"Stack is empty"<<endl;   
            return -1;
        }
        int top()
        { if (topIndex>=0){
            return arr[topIndex];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }}
        bool isempty()
        {
            if (topIndex==-1){
                return true;
            } else{
                return false;
            }
        }
        
        int search(int x)
        {
            for (int i=0;i<=topIndex;i++)
            {
                if (arr[i]==x)
                {
                    return i;
                }
            }
            return -1;
        }   
    
};

class node{
    public: 
    int data;
    node *next;

};
class Liststack:public node{

private:
node *head;
node *tail;
public:
Liststack(){
    head=nullptr;
    tail=nullptr;
}
void push(int x){
    node *temp;
    temp->data=x;
    temp->next=nullptr;
    if(head==nullptr){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
int pop(){
    node  *temp;
    temp=head;
    if (head==nullptr){
        return -1;
    }
    else if (head==tail)
    {
        head=nullptr;
        tail=nullptr;
        return temp->data;
    }
     else {
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    }
   temp->next=nullptr;
   tail=temp;
   return temp->data;
}
int top(){
    if(tail!=nullptr){
    return tail->data;
    }else{
        return -1;
    }
}
bool isempty()
    {
        if (head==nullptr){
            return true;
        }
        else{
            return false;
        }
    }
bool search(int x){
    node *temp;
    temp=head;
    if(head==nullptr){
       return false;
    }
    else{
        while(temp->next!=nullptr)
        {   if(temp->data=x)
                { return true;}
            
            temp=temp->next;}

            if (temp->data=x)
             {return true;}
        return false;
    }
}
};

