#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void printLinearly(int i,int n){
    
    if(i<1){
        return;
    }
    
    printLinearly(i-1,n);
    cout<<i<<endl;
}
int main()
{
     int n;
     cout<<"enter n:";
     cin>>n;
     printLinearly(n,n);

    return 0;
}
