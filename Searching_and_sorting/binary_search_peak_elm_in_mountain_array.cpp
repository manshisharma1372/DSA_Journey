#include <bits/stdc++.h>

using namespace std;

  int findPeakIndex(vector<int> arr){
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        
        while(s<e){
            
            if(arr[mid]<arr[mid+1]){
                
                //right search
                
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
        
    }
    
    int main(){
        vector<int> nums = {1,2,3,1};
        int ans=findPeakIndex(nums);
        cout<<ans;
        
        return 0;
    }