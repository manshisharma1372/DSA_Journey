#include <bits/stdc++.h>

using namespace std;


/*
//method 1 left to right traversal
void lastOCCLtoR(string &s,int i,int &ans,char x){
    
    //base case
    if(i>=s.size()){
        return;
    }
    
    //ek case
    if(s[i]==x){
        ans=i;
    }
    
     lastOCCLtoR(s,i+1,ans,x);
    
}
int main()
{
    string s="abhdefdghdf";
    char x='h';
    int i=0;
    int ans=-1;
    lastOCCLtoR(s,i,ans,x);
    cout<<ans<<endl;

    return 0;
}

*/













// method 2 right to left traversal
void lastOCCRtoL(string &s,int i,int &ans,char x){
    
    //base case
    if(i<0){
        return;
    }
    
    //ek case
    if(s[i]==x){
      ans=i;
      return;
    }
    
     lastOCCRtoL(s,i-1,ans,x);
    
}
int main()
{
    string s="abhdefdghdf";
    char x='h';
    int i=s.size()-1;
    int ans=-1;
    lastOCCRtoL(s,i,ans,x);
    cout<<ans<<endl;

    return 0;
}
