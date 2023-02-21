#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    
    
    for(int i=0;i<n;i++){
        
        //first
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        //second
        for(int j=0;j<i+1;j++){
            cout<<i+j+1;
        }
        
        //third
        int start=2*i;
       for(int j=0;j<i;j++){
           
           cout<<start;
           start=start-1;
          
       }
        
        cout<<endl;
        
    }
    
    return 0;
}