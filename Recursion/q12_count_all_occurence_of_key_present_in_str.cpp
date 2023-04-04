#include <bits/stdc++.h>
using namespace std;

//all occurence 


int check_key(string &str,int i,int &n,int key,int &count){
    
   if(i>=n){
       return -1;
   }
    
    //1 case
    if(str[i]==key){
      count++;
    }
    //baaki recursion
 
    return check_key(str,i+1,n,key,count);
 
}

int main()
{
  
  string str="manshisharma";
  int n=str.length();
  char key='a';
  int i=0;
  int count=0;
  int ans=check_key(str,i,n,key,count);
  cout<<count;
    return 0;
}
