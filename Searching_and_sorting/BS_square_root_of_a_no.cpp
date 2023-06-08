#include<bits/stdc++.h>
using namespace std;

int findSqrt(int n){
    int target=n;
    int s=0;
    int e=n;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        if(mid*mid>target){
            e=mid-1;
        }
      else{
            ans=mid;
            s=mid+1;
      }
        
        mid=s+(e-s)/2;
    }
    return ans;
    
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    
    int ans=findSqrt(n);
    
    int precision;
    cout<<"enter precision: "<<endl;
    cin>>precision;
    double final_ans=ans;
    double step=0.1;
    for(int i=0;i<precision;i++){
        for(double j=final_ans;j*j<=n;j=j+step){
            final_ans=j;
        }
        step=step/10;
    }
    cout<<"Ans is "<<final_ans<<endl;
    return 0;
}
