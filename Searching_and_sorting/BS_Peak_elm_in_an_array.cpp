#include<bits/stdc++.h>
using namespace std;
int findPeak(vector<int> &arr){
 
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>arr[mid+1]  && mid+1<arr.size()){
            return mid;
        }
        if(arr[mid-1]>arr[mid] && mid-1>=0){
            return mid-1;
        }
        
        if(arr[s]>=arr[mid]){
            e=mid-1; //left search
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    vector<int> arr={3,4,5,6,8,1,2};
    int ans=findPeak(arr);
    cout<<"peak elm is:  "<<arr[ans]<<endl;
    return 0;
}
