
#include<bits/stdc++.h>

using namespace std;

int main()
{
 
  //creation
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  
 
  
  //remove
  st.pop();
  
  //check top
  cout<<"elm on top "<<st.top()<<endl;
  
  //size_t
  cout<<"size "<<st.size()<<endl;
  
  if(st.empty()){
      cout<<"empty"<<endl;
  }
  else{
      cout<<"not empty"<<endl;
  }
  
   while(!st.empty()){
      cout<<st.top()<<" ";
      st.pop();
      
  }

    return 0;
}