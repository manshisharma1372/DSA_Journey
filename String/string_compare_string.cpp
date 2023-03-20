#include<bits/stdc++.h>
using namespace std;

bool compareString(string a, string b){
    
    if(a.length()!= b.length()){
        return false;
    }
    
        for(int i=0;i<a.length();i++){
            
            if(a[i]!=b[i]){
                return false;
            }
           
        }
        
    return true;
}

int main(){
    string a="Manshi";
    string b="sharma";
    if(compareString(a,b)){
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
    return 0;
}