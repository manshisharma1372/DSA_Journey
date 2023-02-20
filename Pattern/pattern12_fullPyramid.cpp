#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        
        //for space
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        
        //for star
        for(int j=0;j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}