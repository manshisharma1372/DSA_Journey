#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    
    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }
    
    void push(int data){
        if(rear==size){
            cout<<"Q is FULL";
        }
        else{
            arr[rear]=data;
            rear++;
        }
        
    }
    
    void pop(){
        if(rear==front){
            cout<<"Q IS EMPTY";
        }
        else{
            arr[front]=-1;
            front++;
            
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    
    int getfront(){
        if(rear==front){
            cout<<"Q empty";
            return -1;
        }
        
        else{
            return arr[front];
        }
    }
    
    
    bool isEmpty(){
        
        if(rear==front){
            return true;
        }
        return false;
    }
    
    int getSize(){
        return rear-front;
    }
    
    
};

int main()
{
    
    Queue q(10);
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    
     cout<<q.getfront()<<endl;
     
      cout<<q.getSize()<<endl;
      
    while(!q.isEmpty()){
        cout<<q.getfront()<<" ";
        q.pop();
    }
    
    cout<<endl;
    cout<<q.getSize()<<endl;
    
    
    return 0;
}