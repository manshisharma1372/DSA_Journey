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
    
 
  for(int i=0;i<r;i++){
       int sum=0;
      for(int j=0;j<c;j++){
          sum+=crr[i][j];
      }
      cout<<sum<<" ";
  }

    return 0;
}
