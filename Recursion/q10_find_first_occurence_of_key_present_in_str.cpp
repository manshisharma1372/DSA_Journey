#include <bits/stdc++.h>
using namespace std;

//get index if present but gives only first occurence


int check_key(string &str,int i,int &n,int key){
    
   if(i>=n){
       return -1;
   }
    
    //1 case
    if(str[i]==key){
        return i;
    }
    //baaki recursion
 
  int ans= check_key(str,i+1,n,key);
    return ans;
 
}

int main()
{
  
  string str="manshisharma";
  int n=str.length();
  char key='a';
  int i=0;
  int ans=check_key(str,i,n,key);
   cout<<ans;
    return 0;
}









