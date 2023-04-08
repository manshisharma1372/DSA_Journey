
#include <bits/stdc++.h>

using namespace std;

bool checkSorted(vector<int> &v, int &n, int i){
    if(i==n-1){
        return true;
    }
    
    //ek case
    if(v[i+1]<v[i]){
        return false;
    }
   return checkSorted(v,n,++i);
}

int main()
{
  vector<int> v{10,20,80,40,50};
  int n=v.size();
  int i=0;
  
  bool issorted=checkSorted(v,n,i);
  
  if(issorted){
      cout<<"arr is sorted";
  }
  else{
      cout<<"arr not sorted";
  }

    return 0;
}
