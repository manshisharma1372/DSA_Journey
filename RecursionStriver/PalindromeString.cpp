#include <iostream>
#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(string &str,int i){
    
    int n=str.size();
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    
    return isPalindrome(str,i+1);

}
int main()
{
    string str="MADAM";
    int i=0;
    if(isPalindrome(str,i)){
        cout<<"yes palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome";
    }

    return 0;
}