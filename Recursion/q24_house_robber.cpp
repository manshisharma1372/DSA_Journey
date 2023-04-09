#include <bits/stdc++.h>

using namespace std;
int robCheck(vector<int> &nums,int i){
        
        if(i>=nums.size()){
            return 0;
        }
        
        //1 case
        
        //pick
        int robamt1=nums[i]+robCheck(nums,i+2);
        
        //not pick
        int robamt2=0+robCheck(nums,i+1);
        
        return max(robamt1,robamt2);
        
    }
    
 
   
int main()
{ 
    
    vector<int> nums{2,7,9,3,1};
    cout<<robCheck(nums,0);
    

    return 0;
}
