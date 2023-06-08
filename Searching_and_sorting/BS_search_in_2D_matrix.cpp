#include<bits/stdc++.h>
using namespace std;

bool searchin2d(vector<vector<int>>&v,int target,int row,int col){
    int s=0;
    int e=row*col-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int elm=v[mid/col][mid%col];
        if(elm==target){
            return true;
        }
        if (elm<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        }
    return false;
}

int main()
{
   vector<vector<int>> v={ {1,2,3,4},
                           {5,6,7,8},
                           {9,10,11,12},
                           {13,14,15,16}
                         };
    int target=15;  
    int row=4;
    int col=4;
    bool ans=searchin2d(v,target,row,col);  
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}
