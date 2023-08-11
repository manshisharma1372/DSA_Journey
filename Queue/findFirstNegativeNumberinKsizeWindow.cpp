#include <bits/stdc++.h>

using namespace std;

void solve(int arr[],int n,int k){
    
    deque<int> q;
    
    //process first window of size k
    
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push_back(i);
        }
    }
    
    //remaining window process kro
    
    for(int i=k;i<n;i++){
        
        //answer dedo puraani window ka
        if(q.empty()){
            cout<<"0"<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
        
        //out of window elm remove kro
        while(!q.empty() && (i-q.front()>=k)){
            q.pop_front();
        }
        
        //check curr elm for insertion
        if(arr[i]<0){
            q.push_back(i);
        }
    }
    
    //last window ka ans print krao
     if(q.empty()){
            cout<<"0"<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
    
}

int main()
{
    int arr[]={-8,2,3,-6,10};
    int size=5;
    int k=2;
    solve(arr,size,k);

    return 0;
}
