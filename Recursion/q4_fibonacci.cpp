#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    
    if(n==1)
    {
        
    //first term
    return 0;
    }
    if(n==2){
       // second term
        return 1;
    }
    
   int ans = fib(n-1)+fib(n-2);
   return ans;
   
    
}

int main()
{
    
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<ans;
   return 0;
}