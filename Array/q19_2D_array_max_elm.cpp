#include <bits/stdc++.h>

using namespace std;

int maxim_elm(int arr[][3],int r,int c){
  
  int maxi=INT_MIN;
  for(int i=0;i<r;i++){
      
      
      for(int j=0;j<c;j++){
          if(arr[i][j]>maxi){
              maxi =arr[i][j];
          }
      }
     
  }
  return maxi;
  
    
}


int main()
{
  
  
  int arr[3][3];
  int r=3;
  int c=3;
  //input
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin>>arr[i][j];
      }
  }
  
  int max_num=maxim_elm(arr,r,c);
    cout<<"max elm is:"<<max_num;
    return 0;
}