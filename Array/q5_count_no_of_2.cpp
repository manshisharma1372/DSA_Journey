#include <bits/stdc++.h>

using namespace std;

int main()
{
   int arr[10]={1,2,5,2,4,2,6,2,2,8};
   
   int size=10;
   int max=INT_MIN;
   for(int i=0;i<size;i++){
       if(arr[i]>max){
          max=arr[i];
       }
   }
   
   cout<<max;

    return 0;
}