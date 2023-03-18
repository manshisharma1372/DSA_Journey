#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(char name[]){
    
    int i=0;
    int n=strlen(name);
    int j=n-1;
    
    while(i<=j){
        if(name[i]==name[j]){
            return true;
            i++;
            j--;
        }
        else{
            return false;
        }
        
    }
   
   return false;
   
}

int main()
{
    char name[100];
    cin.getline(name,100);
    
   if(is_palindrome(name)){
       cout<<"Palindrome";
   }
   else{
       cout<<"Not Palindrome";
   }
    return 0;
}