#include <bits/stdc++.h>
using namespace std;


//bool ans


bool check_key(string &str,int i,int &n,int key){
    
   if(i>=n){
       return false;
   }
    
    //1 case
    if(str[i]==key){
        return true;
    }
    //baaki recursion
 
   bool ans= check_key(str,i+1,n,key);
    return ans;
 
}

int main()
{
  
  string str="manshisharma";
  int n=str.length();
  char key='n';
  int i=0;
  bool ans=check_key(str,i,n,key);
   cout<<ans;
    return 0;
}



















//get index if present but gives only first occurence

/*
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
*/








//all occurence 


void check_key(string &str,int i,int &n,int key,vector<int> &ans){
    
   if(i>=n){
       return ;
   }
    
    //1 case
    if(str[i]==key){
       ans.push_back(i);
    }
    //baaki recursion
 
    return check_key(str,i+1,n,key,ans);
 
}

int main()
{
  
  string str="manshisharma";
  int n=str.length();
  char key='a';
  int i=0;
  vector<int> ans;
  check_key(str,i,n,key,ans);
  for(auto it: ans){
      cout<<it<<" ";
  }
    return 0;
}


