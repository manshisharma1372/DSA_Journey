#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,c;
    cin>>n>>c;
    
    
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            for(int j=0;j<c;j++){
                cout<<"*";
            }
        }
        
        else{
            cout<<"*";
            
            for(int k=0;k<c-2;k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
  return 0;
} 