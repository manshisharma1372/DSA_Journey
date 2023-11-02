#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int fact(int n){
    
    long long factorial=1;
    if(n==1){
        return 1;
    }
    factorial=n*fact(n-1);
    return factorial;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    
    return 0;
}