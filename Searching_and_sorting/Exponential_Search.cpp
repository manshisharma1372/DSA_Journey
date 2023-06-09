#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>&arr,int start,int end,int target){
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
        mid=start+(end-start)/2;
    }
    return -1;
}

int expSearch(vector<int>&arr,int target,int n){

    if(arr[0]==target){
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<=target){
        i=i*2;
    }
    
    return bs(arr,i/2,min(i,n-1),target);
}
int main()
{
    vector<int> arr={3,4,5,6,11,13,14,15,56,70};
    int n=arr.size();
    int target=13;
    int ans=expSearch(arr,target,n);
    cout<<"index: "<<ans<<endl;

    return 0;
}