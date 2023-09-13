#include <iostream>
using namespace std;


int binarySearch(int arr[],int n,int target){
    
    int start=0;
    int end=n-1;
    
    
    
    while(start<=end){
        
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        
        else if(target>arr[mid]){
            start=mid+1;
        }
        
        else{
            end=mid-1;        }
        
    }
    
    return -1;
    
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target=90;
    int n=9;
    
    int ansIndex=binarySearch(arr,n,target);
    
    cout<<ansIndex<<endl;

    return 0;
}