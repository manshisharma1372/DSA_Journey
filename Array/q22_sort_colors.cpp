
#include <bits/stdc++.h>

using namespace std;


void sortColors(vector<int>& nums) {
        
        // @method 1 cannot use
         //sort(nums.begin(),nums.end());
        
        
       
        //INPLACE SORT-->method 4 best
        
        int low=0;
        int med=0;
        int high=nums.size()-1;
        
        while(med<=high){
            if(nums[med]==0){
                swap(nums[low],nums[med]);
                low++;
                med++;
            }
            
            else if(nums[med]==1){
                med++;
            }
            
            else if(nums[med]==2){
                swap(nums[high],nums[med]);
                high--;
            }
        }
}
        
int main()
{
 
 vector<int> nums{2,0,2,1,1,0};
 sortColors(nums);
 for(auto it:nums){
     cout<<it<<" ";
 }

    return 0;
}
