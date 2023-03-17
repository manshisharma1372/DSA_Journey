#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4][4];
    int r=4;
    int c=3;
    
    //row wise input
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    
     //rowwise print
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;


    //col wise input
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[j][i];
        }
    }
    
      //columnwise print
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
