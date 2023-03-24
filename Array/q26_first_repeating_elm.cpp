#include <bits/stdc++.h>

using namespace std;

 int first_Repeated(int arr[],int n){
     
     /*
    // @ O(n^2)
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(arr[i]==arr[j]){
                 return i+1;
             }
         }
     }
     return -1;
     */
     
     
     //@O(n)
     
     unordered_map<int,int> m;
     
     for(int i=0;i<n;i++){
         int elm=arr[i];
         m[elm]++;
     }
     
     for(int i=0;i<n;i++){
         int x=arr[i];
         if(m[x]>1){
             return i+1;
         }
     }
     return -1;
 }

int main()
{   

    int arr[]={1,5,3,4,3,5,6};
    int n=7;
    cout<<first_Repeated(arr,n);

    return 0;
}
