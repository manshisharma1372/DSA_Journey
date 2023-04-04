#include <bits/stdc++.h>
using namespace std;



void print_array(int arr[],int n,int i){
    
   if(i>=n){
       return;
   }
    
    //1 case
    cout<<arr[i]<<" ";
    //baaki recursion
    
    print_array(arr,n,i+1);
    
 
}

int main()
{
    int arr[5]={10,20,30,40,50};
    int n=5;
    int i=0;
   print_array(arr,n,i);
   
    return 0;
}











