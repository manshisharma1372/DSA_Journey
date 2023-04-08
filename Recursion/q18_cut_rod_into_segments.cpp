
#include <bits/stdc++.h>

using namespace std;

int solve(int n,int x,int y,int z){
    
    if(n==0){
        return 0;
    }
    
    if(n<0){
        return INT_MIN;
    }
    
    //case
    int ans1=solve(n-x,x,y,z)+1;
     int ans2=solve(n-y,x,y,z)+1;
     int ans3=solve(n-z,x,y,z)+1;
     int ans=max({ans1,ans2,ans3});
     return ans;
}
    
  



int main()
{
    
    int n=7,x=5,y=2,z=2;
    
    int ans=solve(n,x,y,z);
    if(ans<0){
        ans=0;
    }
    
    cout<<ans;
    
    return 0;
}
