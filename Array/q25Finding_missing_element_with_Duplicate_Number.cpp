 #include<bits/stdc++.h>
 using namespace std;
 
  void findMissing(vector<int> &nums) {
        
        
        /*
        //visited method
        
        for(int i=0;i<nums.size();i++){
            
                int index =abs(nums[i]);
                
                if(nums[index - 1] >0){
                    nums[index-1]*=-1;
                }
        }
        
        
        //all positive index are missing
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]>0){
               cout<<i+1<<" ";
            }
        }
    
        */
        
        
        
        //sorting+ swapping method
        
        int i=0;
        while(i<nums.size()){
            
            int index=nums[i]-1;
            if(nums[i]!=nums[index]){
                swap(nums[i],nums[index]);
            }
            
            else{
                i++;
            }
                            
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                cout<<i+1<<" ";
            }
        }
        
        
        
      
    }
 int main(){
     
    vector<int> nums={1,3,3,3,5};
    findMissing(nums);
    return 0;
 }