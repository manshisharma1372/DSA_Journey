
#include <bits/stdc++.h>

using namespace std;


void move_negative_no_left(vector<int> &v){
    
    int low=0;
    int high=v.size()-1;
    
    while(low<high){
        
        if(v[low]<0){
            low++;
        }
        else if(v[high]>0){
            high--;
        }
        else if(v[low]>0 && v[high]<0) {
            swap(v[low],v[high]);
        }
    }
}
int main()
{
 
    vector<int> v{1,2,-3,4,-5,6};
    
    move_negative_no_left(v);
    
    for(auto it:v){
        cout<<it<<" ";
    }

    return 0;
}
