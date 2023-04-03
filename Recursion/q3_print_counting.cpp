#include <bits/stdc++.h>
using namespace std;

void counting(int n){
    
    
    //base case
    if(n==0){
        return;
    }
    
    //recursive relation
    counting(n-1);
    
     //processsing
    cout<<n<<" ";
    
}

int main()
{
    
    int n;
    cin>>n;
    counting(n);
   return 0;
}