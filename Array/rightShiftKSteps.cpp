#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> arr={10,20,30,40,50,60};
   int k=2;
   int n=arr.size();
   vector<int> ans(n);
   
   for(int i=0;i<n;i++){
       int newIndex= (k+i)%n;
       
       ans[newIndex]=arr[i];
   }
   
   for(auto it: ans){
       cout<<it<<" ";
   }

    return 0;
}
