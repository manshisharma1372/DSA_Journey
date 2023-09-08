#include<bits/stdc++.h>
using namespace std;

void printAllTriplet(int arr[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
               }
            }
           
    }
}
int main(){
    
    int n=3;
    int arr[]={10,20,30};
    printAllTriplet(arr,n);
    return 0;
}