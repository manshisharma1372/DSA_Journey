#include <bits/stdc++.h>

using namespace std;

bool checkPalindrome(string &s,int start,int end){
    
    //bc
    if(start>=end){
        return true;
    }
    
    // 1 case
    if(s[start]!=s[end]){
        return false;
    }
    
    return checkPalindrome(s,++start,--end);
    
}
   
int main()
{ 
    string s="racecar";
    cout<<checkPalindrome(s,0,s.size()-1);
    

    return 0;
}
