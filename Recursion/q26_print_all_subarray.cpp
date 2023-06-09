#include <bits/stdc++.h>

using namespace std;


void printSubarray_util(vector<int> &v,int start,int end){
    
    if(end==v.size()){
        return;
    }
    
    //1 case
    for(int i=start;i<=end;i++){
        
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    
    printSubarray_util(v,start,end+1);
    
}


void printSubarray(vector<int> &v){
    
    for(int start=0;start<v.size();start++){
        int end=start;
        printSubarray_util(v,start,end);
    }
}
int main()
{
    vector<int> v{1,2,3,4,5};
    printSubarray(v);

    return 0;
}
