#include <bits/stdc++.h>

using namespace std;
void insertAtBottom(stack<int> &st,int target){
     //bc
      if(st.empty()){
        
        st.push(target);
        return;
    }
    
    int temp=st.top();
    st.pop();
    insertAtBottom(st,target);
    
    st.push(temp);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    
    //finding target and del it
    if(st.empty()){
        cout<<"stack is empty cant insert at bottom"<<endl;
    }
    int target=st.top();
    st.pop();
    
    insertAtBottom(st,target);
    
    //printing
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
