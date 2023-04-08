
#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &arr,int i,int sum,int &maxi){
    
    if(i>=arr.size()){
        maxi=max(sum,maxi);
        return;
    }
    
    //include
    
    solve(arr,i+2,sum+arr[i],maxi);
    
    //exclude
    solve(arr,i+1,sum,maxi);
    
    
}
    
  



int main()
{
   
    vector<int> v{1,2,3,1,3,5,8,1,9};
    int sum=0;
    int maxi=INT_MIN;
    int i=0;
    solve(v,i,sum,maxi);
    cout<<maxi;
    return 0;
}
