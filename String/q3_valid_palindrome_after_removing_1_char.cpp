#include <bits/stdc++.h>

using namespace std;
bool ispalindrome(string s,int i,int j){
    
    while(i<=j){
        if(s[i]!=s[j])
        return false;
        
        i++;
        j--;
    }
    return true;
    
}
bool checkvalidPalindrome(string s){
    
    int i=0;
    int j=s.size()-1;
    while(i<=j){
        if(s[i]!= s[j]){
            
            return ispalindrome(s,i+1,j) || ispalindrome(s,i,j-1);
        }
        else if(s[i]==s[j]){
            i++;
            j--;
            
        }
    }
    return true;
}


int main()
{
    string str="abca";
    if(checkvalidPalindrome(str)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
   
    
    
    return 0;
}
