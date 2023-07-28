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

int main(){
    
    stack<int> s;
    s.push(8);
    s.push(6);
    s.push(4);
    s.push(2);
    int target=5;
    
    insertSorted(s,target);
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
}