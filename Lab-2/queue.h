class Arrayqueue{
    private:
        int *arr;
        int capacity;
        int frontIndex;
        int rearindex;
    public:
        Arrayqueue(int capacity){frontIndex=-1;
        rearindex=-1;
        capacity=capacity;
        arr= new int(capacity);}
        void push(int x)
        {  while(rearindex<capacity)
            {
                if(frontIndex==-1){
            frontIndex=0;
            rearindex=0;    
            }
            else{rearindex++;}

        arr[rearindex]=x;
        }       
        }
        int pop()
        { if(frontIndex<=rearindex){
         int a;
         a=arr[frontIndex];
         frontIndex++;
         return a;}
         else{
          return -1;}
        }
        int top()
        { if(frontIndex<=rearindex){
            return arr[rearindex];
        }
        else{
            return -1;
        }
        }
        bool isempty()
        {
            if (rearindex==-1){
                return true;
            } else{
                return false;
            }
        }
        
        int search(int x)
        {
            for (int i=frontIndex;i<=rearindex;i++)
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
class Listqueue:public node{

private:
node *head;
node *tail;
public:
Listqueue(){
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
    temp=head;
    head=head->next;
    int a;
    a=temp->data;   
    delete temp;
     return temp->data;
    }
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

