#include <bits/stdc++.h>
using namespace std;



void find_maxi(int arr[],int n,int i,int &maxi){
    
  
   if(i>=n){
       return;
   }
    
  //1 case 
  //curr elm check kro max h k nhi
   maxi=max(maxi,arr[i]);
   
   // baki recusrsion
   find_maxi(arr,n,i+1,maxi);
    
 
}

int main()
{
    int arr[5]={10,20,30,40,50};
    int n=5;
    int i=0;
    
    int maxi=INT_MIN;
    find_maxi(arr,n,i,maxi);
    cout<<maxi;
    return 0;
}











