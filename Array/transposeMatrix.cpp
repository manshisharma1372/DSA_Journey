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
      for(int j=i;j<c;j++){
         swap(crr[i][j],crr[j][i]);
      }
  }
  
  cout<<endl;
  
   for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         cout<<crr[i][j]<<" ";
      }
      cout<<endl;
  }


    return 0;
}
