
#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
        
        map<char,char> m;
        set<char> x;
        for(int i=0;i<s.size();i++){
            
            if(m.count(s[i])==0 && x.count(t[i])==0){
                m[s[i]]=t[i];
                x.insert(t[i]);
            }
            
            else if( m.count(s[i])==0 && x.count(t[i])){
                return false;
            }
            else if( m[s[i]] !=t[i]){
                return false;
            }
        }
        return true;
    }
int main()
{
    string s = "egg";
    string t="add";
    if(isIsomorphic(s,t)){
        cout<<"yes isIsomorphic";
    }
    else{
        cout<< " no not isIsomorphic";
    }
  
}
