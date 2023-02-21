#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        
        //first spaces
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        
        //second numbers with spaces
        int start=1;
        for(int j=0;j<2*i+1;j++){
            
            //first row or last row
            if(i==0 || i==n-1){
                
            if(j%2==0){
                //even
            cout<<start;
            start++;
            }
            else{
                
                //odd
                cout<<" ";
            }
            }
            else{
                if(j==0){
                    cout<<1;
                }
                
                else if(j==2*i){
                    cout<<i+1;
                }
                else{
                    cout<<" ";
                }
            } 
        }
        
        
        cout<<endl;
    }
    
    return 0;
}