
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[]={0,1,0,0,1};
    
    
    int ctZero=0;
    int ctOnes=1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            ctZero++;
        }
        else{
            ctOnes++;
        }
    }
    
    int i=0;
    while(ctZero--){
        arr[i]=0;
        i++;
    }
    while(ctOnes--){
        arr[i]=1;
        i++;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}