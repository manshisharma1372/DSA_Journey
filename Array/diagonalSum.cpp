#include <iostream>

using namespace std;

int main()
{
   
    //input 
    int crr[3][3];
    int r=3,c=3;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>crr[i][j];
        }
    }
    
    /*
  int sum=0;
  for(int i=0;i<r;i++){
      
      for(int j=0;j<c;j++){
         if(i==j){
              sum+=crr[i][j];
         }
         
      }
      
  }
  cout<<sum<<" ";
  */
  int sum=0;
  for(int i=0;i<r;i++){
      sum+=crr[i][i];
  }
  cout<<sum;

    return 0;
}
