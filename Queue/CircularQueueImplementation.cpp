#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    
    CircularQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    
    void push(int data){
        //case 1 q is full
        
        if((rear==size-1 && front==0) || ((rear+1) % size == front)){
            cout<<"Q is full"<<endl;
        }
        
        //case 2 first elm
        
        else if(front==-1){
            front=rear=0;
            arr[rear]=data;
        }
        
        //case 3 circular nature
        
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=data;
        }
        
        //case 4 normal case
        else{
            rear++;
            arr[rear]=data;
        }
    }
    
    void pop(){
        
        //case 1 empty check
        if(front==-1){
            cout<<"Q is empty"<<endl;
        }
        
        //case 2 single elm 
        else if(front==rear){
            arr[front]=-1;
            front=1;
            rear=-1;
        }
        
        //case 3 circular
        else if(front==size-1){
            front=0;
        }
        
        //case normal
        else{
            front++;
        }
       
    }
    
    
    
};

int main()
{
    
    CircularQueue q(5);
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
     q.push(20);
    q.push(30);
    q.push(40);
  
  
    
    
}