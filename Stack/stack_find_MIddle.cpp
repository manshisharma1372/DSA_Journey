#include <bits/stdc++.h>
using namespace std;


void printMiddle(stack<int> &st,int &totalsize){
    
    if(st.size()==0){
        cout<<"no elm in stack";
    }
    
    //base case
    if(st.size()==totalsize/2+1){
        cout<<"Middle elm "<<st.top()<<endl;
        return;
    }
    
    int temp=st.top();
    st.pop();
    
    //recusrsive call
    printMiddle(st,totalsize);
    
    //backtrack
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
    
    int totalsize=st.size();
    printMiddle(st,totalsize);
    return 0;
}