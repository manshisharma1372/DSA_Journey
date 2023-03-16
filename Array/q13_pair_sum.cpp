#include<bits/stdc++.h>
using namespace std;

int main(){
    
  vector<int> arr{10,20,30,60};
  int sum=80;
  vector<int> ans;
  
  for(int i=0;i<arr.size();i++){
      
      for(int j=i+1;j<arr.size();j++){
       
            if(arr[i]+arr[j]==sum){
                ans.push_back(arr[i]);
                 ans.push_back(arr[j]);
                 
           
           }   
      }
  }
  
  for(auto it:ans){
      cout<<it<<" ";
  }
    return 0;
}