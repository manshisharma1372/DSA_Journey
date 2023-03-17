#include <bits/stdc++.h>

using namespace std;

int mini_elm(int arr[][3],int r,int c){
  
  int mini=INT_MAX;
  for(int i=0;i<r;i++){
      
      
      for(int j=0;j<c;j++){
          if(arr[i][j]<mini){
              mini =arr[i][j];
          }
      }
     
  }
  return mini;
  
    
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
  
  int min_num=mini_elm(arr,r,c);
    cout<<"min elm is:"<<min_num;
    return 0;
}