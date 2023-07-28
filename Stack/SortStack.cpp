#include<bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &s,int target){
    
    if(s.empty()){
        s.push(target);
        return;
    }
    
    if(s.top()>=target){
        s.push(target);
        return;
    }
    
    int temp=s.top();
    s.pop();
    
    insertSorted(s,target);
    
    s.push(temp);
}

void sortStack(stack<int> &s){
    
    //bc
    if(s.empty()){
        return;
    }
    
    int temp=s.top();
    s.pop();
    
    sortStack(s);
    
    insertSorted(s,temp);
    
}

int main(){
    
    stack<int> s;
    s.push(8);
    s.push(1);
    s.push(4); 
    s.push(2);
    s.push(3);
    s.push(9);
  
    sortStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
} 