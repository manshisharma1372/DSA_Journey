#include <bits/stdc++.h>

using namespace std;

int main()
{
   int arr[10]={0,0,0,1,1,1,0,1,0,1};
   
   int size=10;
   int count_zero=0,count_one=0;
   for(int i=0;i<size;i++){
       if(arr[i]==0){
           count_zero++;
       }
       
       else if(arr[i]==1){
           count_one++;
       }
   }
   
   cout<<count_zero<<" "<<count_one;

    return 0;
}