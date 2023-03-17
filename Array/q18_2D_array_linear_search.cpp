#include <bits/stdc++.h>

using namespace std;

bool findKey(int arr[][3],int r,int c,int key){
  
  for(int i=0;i<r;i++){
      
      int sum=0;
      for(int j=0;j<c;j++){
          if(arr[i][j]==key){
              return true;
          }
      }
     
  }
  return false;
  
    
}

int main()
{
  
  
  int arr[3][3];
  int r=3;
  int c=3;
  int key;
  cin>>key;
  //input
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin>>arr[i][j];
      }
  }
  
  if(findKey(arr,r,c,key)){
      cout<<"present";
  }
  else{
      cout<<"not present";
  }
 
    
    return 0;
}