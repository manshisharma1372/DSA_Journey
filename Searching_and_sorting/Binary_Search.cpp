#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int size,int target){
    
    int start=0;
    int end=size-1;
    
    int mid=start+(end-start)/2;
    
    while(start<=end){
        int elm=arr[mid];
        
        if(elm==target){
            return mid;
        }
        
        else if(elm<target){
            start=mid+1;
        }
        
        else if(elm>target){
            end=mid-1;
        }
        
        mid=start+(end-start)/2;
    }
    
    return -1;
    
}

int main()
{
    int arr[]={2,4,6,8,10,12,16};
    
    int target=10;
    int n=7;
    int index_of_target=binarySearch(arr,n,target);
    
    if(index_of_target==-1){
        cout<<"not found";
    }
     else{
         cout<<"target found at index "<<index_of_target;
     }
    return 0;
}