#include<bits/stdc++.h>
using namespace std;

 int uniqueAns( int arr[],int n){
      int ans=0;
    for(int i=0;i<n;i++){
     ans=ans^arr[i];
    }
    return ans;
 }
int main(){
    
    int n=9;
    int arr[]={1,1,2,2,3,6,6,7,7};
    int ans=uniqueAns(arr,n);
   
    cout<<"Unique elm is "<<ans<<endl;
}