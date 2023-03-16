#include<bits/stdc++.h>
using namespace std;

int main(){
    
   vector<int> arr{1,2,3,4,6,8};
  
    vector<int> brr{3,4,10};

    vector<int> ans;
    
    for(int i=0;i<arr.size();i++){
        
        int elm=arr[i];
        for(int j=0;j<brr.size();j++){
            if(elm==brr[j]){
                
                //mark
                brr[j]=-1;
                ans.push_back(elm);
            }
        }
        
    }
  //  sort(ans.begin(),ans.end());
    
    for(auto it:ans){
        cout<<it<<" ";
    }
    
  
    return 0;
}