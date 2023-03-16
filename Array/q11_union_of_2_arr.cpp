#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[]={1,3,5,7,9};
    int size_a=5;
    int brr[]={2,4,6,8};
    int size_b=4;
    vector<int> ans;
    
    for(int i=0;i<size_a;i++){
        
        ans.push_back(arr[i]);
    }
    for(int i=0;i<size_b;i++){
        
        ans.push_back(brr[i]);
    }
    
    sort(ans.begin(),ans.end());
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    
  
    return 0;
}