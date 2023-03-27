#include <bits/stdc++.h>

using namespace std;

int last_occurence(vector<int> arr,int target){
    
    int start=0;
    int end=arr.size()-1;
    
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        int elm=arr[mid];
        
        if(elm==target){
            //ans store
            ans=mid;
            //left search
            start=mid+1;
        }
        
        else if(elm<target){
            //right search
            start=mid+1;
        }
        
        else if(elm>target){
            //left search
            end=mid-1;
        }
        
        mid=start+(end-start)/2;
    }
    
    return ans;
    
}

int main()
{
    vector<int> v{1,3,4,4,4,4,4,6,7,9};
    
    int target=4;
   
    int index_of_last_occ=last_occurence(v,target);
    
    cout<<index_of_last_occ;
    return 0;
}