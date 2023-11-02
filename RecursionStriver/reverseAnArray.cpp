#include <iostream>
#include<bits/stdc++.h>
using namespace std;


/*
METHOD !

void reverseArray(int arr[],int n,int i,int j){
    
    if(i>=j){
        return;
    }
    swap(arr[i],arr[j]);
    reverseArray(arr,n,i+1,j-1);
}
int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};
    int i=0;
    int j=n-1;
    reverseArray(arr,n,i,j);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

*/


void reverseArray(int arr[],int n,int i){
    
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverseArray(arr,n,i+1);
}
int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};
    int i=0;
    reverseArray(arr,n,i);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}