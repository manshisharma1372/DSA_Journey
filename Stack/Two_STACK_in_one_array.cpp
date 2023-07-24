#include <bits/stdc++.h>
using namespace std;


class Stack{
    
    public:
    
    int* arr;
    int size;
    int top1;
    int top2;
    
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }
    
    void push1(int data){
        
        if(top2-top1==1){
            
            //space not available
            cout<<"overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]=data;
        }
        
    }
    
    void push2(int data){
        
        if(top2-top1==1){
            cout<<"space not available"<<endl;
        }
        else{
            top2--;
            arr[top2]=data;
        }
        
    }
    void pop1(){
        
        if(top2-top1==1){
            cout<<"underflow in stack 1"<<endl;
        }
        else{
            top1--;
        }
    }
    
    void pop2(){
        if(top2-top1==1){
            cout<<"undeflow stack 2";
        }
        else{
            top2++;
        }
        
    }
    
};

int main()
{
    Stack s(10);
    
    s.push1(10);
    s.push1(20);
    s.push2(30);
    s.push2(40);
    s.push2(50);
    
    return 0;
}