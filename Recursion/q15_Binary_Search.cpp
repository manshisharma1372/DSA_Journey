
#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &v, int s, int e,int key){
   // case 1 key not found
   
    if(s>e){
        return -1;
    }
    
    int mid=s+(e-s)/2;
    
    //case 2 key found
    if(v[mid]==key){
        return mid;
    }
    
    
    if(v[mid]<key){
       return binarySearch(v,mid+1,e,key);
    }
    
     else 
    {
       return binarySearch(v,s,mid-1,key);
    }

}

int main()
{
  vector<int> v{10,20,30,40,50,80};
  int target=80;
  int n=v.size();
  int s=0;
  int e=n-1;
  int isPresent=binarySearch(v,s,e,target);
  cout<<isPresent;

    return 0;
}
