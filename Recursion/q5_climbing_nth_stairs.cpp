#include <bits/stdc++.h>
using namespace std;


//TLE
int climb_wys(int n){
    
    if(n==1 || n==0){
        return 1;
    }
    if(n==2){
        return 2;
    }
    
    int total_ways=climb_wys(n-1)+climb_wys(n-2);
    return total_ways;
}

int main()
{
    int n;
    cin>>n;
    int ans= climb_wys(n);
    cout<<ans;
    return 0;
}
