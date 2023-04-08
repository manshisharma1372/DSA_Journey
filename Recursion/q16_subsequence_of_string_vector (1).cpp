
#include <bits/stdc++.h>

using namespace std;

void printSubsequences(string str, string output,int i,vector<string> &v){
    
    
    if(i>=str.length()){
       v.push_back(output);
        return;
    }
    
    //exclude
    printSubsequences(str,output,i+1,v);
    
    //include concat
    output=output+str[i];
   
    printSubsequences(str,output,i+1,v);
}


int main()
{
  string str="abc";
  string output="";
  int i=0;
  vector<string> v;
  printSubsequences(str,output,i,v);
  
  for(auto it:v){
      cout<<it<<" ";  
  }
    return 0;
}
