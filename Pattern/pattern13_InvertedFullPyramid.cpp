#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        
        //space
        
        for(int k=0;k<i;k++){
            
            cout<<" ";
        }
        
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}