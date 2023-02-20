#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    //first half
    
    //1
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
      
      
    
    //2 
    
     
        for(int j=0;j<2*i+1;j++){
            cout<<" ";
        }
        
       

    
    //3 
    
   
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
       
       cout<<endl;
     
    }
    
    //second half
    
      //4
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
      
      
    
    //5
    
     
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<" ";
        }
        
       

    
    //6
    
   
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
       
       cout<<endl;
     
    }
    
    
    
    return 0;
}