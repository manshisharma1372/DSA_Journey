#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void printRev(int i,int n){
    
    if(i>n){
        return;
    }
    
    printRev(i+1,n);
    cout<<i<<endl;
}
int main()
{
     int n;
     cout<<"enter n:";
     cin>>n;
     printRev(1,n);

    return 0;
}
