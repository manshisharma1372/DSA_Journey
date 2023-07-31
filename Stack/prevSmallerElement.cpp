#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    
    stack<int> st;
    st.push(-1);
    vector<int> ans(v.size());
    
    for(int i=0;i<v.size();i++){
        int curr=v[i];
        while(st.top()>=curr){
            st.pop();
        }
        
        ans[i]=st.top();
        st.push(curr);
    }
    
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}