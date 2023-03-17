#include <bits/stdc++.h>

using namespace std;

void print_row_sum(int arr[][3],int r,int c){
    
    //col sum
     //cal sum
  
  for(int i=0;i<r;i++){
      
      int sum=0;
      for(int j=0;j<c;j++){
          sum+=arr[j][i];
      }
      cout<<sum<<" ";
  }
  
    
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
  
  print_row_sum(arr,r,c);
 
    
    return 0;
}