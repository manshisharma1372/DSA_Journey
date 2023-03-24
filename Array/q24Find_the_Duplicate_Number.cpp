 #include<bits/stdc++.h>
 using namespace std;
 
  int findDuplicate(vector<int>& nums) {
        
        
        
        //o(n log n)
        /*
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        
        return -1;
        
        */
        
        
        //visited soln tc=o(n)  sc=o(1) but array is modified
        
        /*
        
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            
            int index=abs(nums[i]);
            
            //already visited?
            if(nums[index]<0){
                ans=index;
                break;
            }
            
            //mark it visited
            nums[index]*=-1;
            
        }
        return ans;
        */
        
//positoning method
        
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        
        return nums[0];
        
    }
 int main(){
     
     vector<int> nums{1,3,4,2,2};
    cout<< findDuplicate(nums);
     return 0;
 }