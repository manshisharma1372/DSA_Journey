#include <bits/stdc++.h>
using namespace std;


class Stack{
    
    public:
    
    int* arr;
    int top;
    int size;
    
    Stack(int size){
        
        arr=new int[size];
        this->size=size;
        top=-1;
        
    }
    
    void push(int data){
        
        if(size-top>1){
            //space avl
            
            top++;
            arr[top]=data;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
        
    }
    
    void pop(){
        
         if(top==-1){
             cout<<"stack underflow"<<endl;
         }
         
         else{
             top--;
         }
        
        
    }
    
    int gettop(){
        
        if(top==-1){
            cout<<"stack empty"<<endl;
        }
        return arr[top];
        
    }
    
    int getsize(){
        
        return top+1;
        
    }
    
    bool isempty(){
        
        if(top==-1){
            return true;
        }
        return false;
        
    }
    
};

int main()
{
    Stack s(10);
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    while(!s.isempty()){
        
        cout<<s.gettop()<<" ";
        s.pop();
        
    }
    
    cout<<endl;
    cout<<"size "<<s.getsize()<<endl;
    return 0;
}