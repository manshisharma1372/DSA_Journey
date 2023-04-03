#include <bits/stdc++.h>
using namespace std;

int fac(int n){
    
    if(n==1){
        return 1;
    }
    
    int choti_prblm=fac(n-1);
    int badi_problem=n*choti_prblm;
    return badi_problem;
}

int main()
{
    
    int n;
    cin>>n;
    int ans=fac(n);
    cout<<ans;
    return 0;
}