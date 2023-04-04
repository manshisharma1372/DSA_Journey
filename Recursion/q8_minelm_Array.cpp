#include <bits/stdc++.h>
using namespace std;



void find_mini(int arr[],int n,int i,int &mini){
    
  
   if(i>=n){
       return;
   }
    
  //1 case 
  //curr elm check kro max h k nhi
   mini=min(mini,arr[i]);
   
   // baki recusrsion
   find_mini(arr,n,i+1,mini);
    
 
}

int main()
{
    int arr[5]={10,20,90,40,50};
    int n=5;
    int i=0;
    
    int mini=INT_MAX;
    find_mini(arr,n,i,mini);
    cout<<mini;
    return 0;
}











