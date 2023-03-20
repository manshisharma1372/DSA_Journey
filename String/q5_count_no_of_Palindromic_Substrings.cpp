#include <bits/stdc++.h>

using namespace std;

int expandAroundIndex(string s,int left,int right){
    
    int count=0;
    
    //jab tak match kre tab tk count++ krna and left-- and right++ krna dhyan rhe left>0 and right<s.size()
   while(left>=0 && right<s.length() && s[left]==s[right]){
        count++;
        left--;
        right++;
    }
    return count;
 
}

int countSubstrings(string s){
    
    int total_count=0;
    int n=s.size();
    
    for(int center=0;center<n;center++){
        
        //odd
        int oddans=expandAroundIndex(s,center,center);
        total_count+=oddans;
        
        //even
        int evenans=expandAroundIndex(s,center,center+1);
        total_count+=evenans;
    }
    
    return total_count;
}


int main()
{
  string str="aaa";
  cout<<countSubstrings(str);
    return 0;
}
