#include <bits/stdc++.h>

using namespace std;

bool find(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main()
{
   int arr[5]={1,3,5,7,8};
   
   int size=5;
   cout<<"enter key";
   int key;
   cin>>key;
   
   if(find(arr,size,key)){
       cout<<"found";
   }
   else{
       cout<<"not found";
   }
   

    return 0;
}