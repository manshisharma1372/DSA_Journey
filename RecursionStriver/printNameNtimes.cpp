#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void printName(int n,string& name){
    
    if(n==0){
        return;
    }
    cout<<name<<endl;
    n--;
    printName(n,name);
}
int main()
{
     int n;
     cout<<"enter n:";
     cin>>n;
     string name="manshi";
     printName(n,name);

    return 0;
}
