#include <bits/stdc++.h>

using namespace std;


void reverse(string &s, int start,int end){
    
    //base case
    if(start>=end){
        return;
    }
    
    //ek case
    swap(s[start],s[end]);
     reverse(s,start+1,end-1);
}

int main()
{
    string s="hello";
    int start=0;
    int end=s.size()-1;
    reverse(s,start,end);
    cout<<s;

    return 0;
}
