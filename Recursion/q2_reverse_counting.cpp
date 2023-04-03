#include <bits/stdc++.h>
using namespace std;

void rev_counting(int n){
    
    
    //base case
    if(n==0){
        return;
    }
    
    //processsing
    cout<<n<<" ";
    
    //recursive relation
    rev_counting(n-1);
    
}

int main()
{
    
    int n;
    cin>>n;
    rev_counting(n);
   return 0;
}