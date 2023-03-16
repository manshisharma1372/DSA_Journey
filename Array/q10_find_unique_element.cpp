#include<bits/stdc++.h>
using namespace std;

int findUnique(vector<int> arr){
    
    int ans=0;
    for(int i=0;i<arr.size();i++){
        
        ans=ans^arr[i];
    }
    
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    
    int unique_elm= findUnique(arr);
    
    cout<<"unique element is:"<<unique_elm<<endl;
    
    return 0;
}