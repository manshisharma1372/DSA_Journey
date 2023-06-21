
#include<bits/stdc++.h>
using namespace std;

//method one 
/*
 bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        return s==t;          
    }
    */
    
    //method 2 
    bool isAnagram(string s, string t) {
       
           int freqTable[256]={0};
           
           for(int i=0;i<s.size();i++){
               freqTable[s[i]]++;
           }
           
           for(int i=0;i<t.size();i++){
               freqTable[t[i]]--;
           }
           
           for(int i=0;i<256;i++){
               if(freqTable[i] != 0){
                   return false;
               }
           }
           return true;
           
    }
int main()
{
    string s="anagram";
    string t="anagram";
    if(isAnagram(s,t)){
        cout<<"yes anagram";
    }
    else{
        cout<<"not anagram";
    }
    return 0;
   
}
