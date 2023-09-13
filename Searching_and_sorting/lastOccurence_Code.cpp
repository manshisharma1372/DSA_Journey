#include <iostream>
using namespace std;


int lastOccurence(int arr[],int n,int target){
    
    int start=0;
    int end=n-1;
    
    int ans=-1;
    
    while(start<=end){
        
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        
        else if(target>arr[mid]){
            start=mid+1;
        }
        
        else{
            end=mid-1;        }
        
    }
    
    return ans;
    
}
int main()
{
    int arr[]={10,20,30,30,30,40,50,60,70};
    int target=30;
    int n=9;
    
    int ansIndex=lastOccurence(arr,n,target);
    
    cout<<ansIndex<<endl;

    return 0;
}