#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        
        //space 
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        
        //star
        for(int j=0;j<2*i+1;j++){
            if(j==0){
                cout<<"*";
        }
        else if(j==2*i){
            cout<<"*";
        }
        
       else{
           cout<<" ";
       }
      
        
      
    }
    cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        
        //space
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        
        for(int j=0;j<2*n-(2*i-1);j++){
            
           if(j==0|| j==2*n-2*i-2){
               cout<<"*";
           }
           else{
               cout<<" ";
           }
        }
        cout<<endl;
    }
     
    
    return 0;
}