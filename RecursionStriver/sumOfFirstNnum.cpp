#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*
PARAMETRIZED

void printSum(int &sum,int n){
    if(n==0){
        return;
    }
    sum+=n;
    printSum(sum,n-1);
}
int main()
{
    int n;
    cin>>n;
    int sum=0;
    printSum(sum,n);
    cout<<sum;

    return 0;
}

*/


//functional

int printSum(int n){
    
    long long sum=0;
    if(n==0){
        return 0;
    }
    sum=n+printSum(n-1);
    return sum;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<printSum(n);
    
    return 0;
}