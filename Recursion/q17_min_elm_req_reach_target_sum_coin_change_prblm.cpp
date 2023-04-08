
#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr,int target){
    
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
        }
        
        //1 case
        
        int mini=INT_MAX;
        for(int i=0;i<arr.size();i++){
            int ans=solve(arr,target-arr[i]);
            
            if(ans!=INT_MAX){
                mini=min(mini,ans+1);
            }
        }
        return mini;
    
}
    
    
  



int main()
{
    vector<int> v{2,5,1,3};
    int target=8;
    int ans=solve(v,target);
    cout<<ans;
    return 0;
}
