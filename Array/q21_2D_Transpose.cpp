#include <bits/stdc++.h>

using namespace std;

void transpose(int arr[][3],int r,int c,int transposei[][3]){
  

  for(int i=0;i<r;i++){
      
      
      for(int j=0;j<c;j++){
          
        transposei[j][i]=arr[i][j];
          }
      }
  
}

void print_arr(int arr[][3],int r,int c){
      for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         cout<<arr[i][j]<<" ";
      }
      cout<<endl;
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
  
  int transposei[3][3];
  cout<<"before"<<endl;
    print_arr(arr,r,c);
  transpose(arr,r,c,transposei);
  
  cout<<"transpose"<<endl;
  print_arr(transposei,r,c);

    return 0;
}