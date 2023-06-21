
#include<bits/stdc++.h>
using namespace std;

 string reverseOnlyLetters(string &s) {
        
        int l=0;
        int h=s.size()-1;
        
        while(l<h){
            
            if(isalpha(s[l]) && isalpha(s[h])){
                swap(s[l],s[h]);
                l++;
                h--;
            }
            
            else if( !isalpha(s[l]) ){
                l++;
            }
            else{
                h--;
            }
        }
        return s;
        
    }
int main()
{
  string s="ab-cd";
  reverseOnlyLetters(s);
   cout<<s;
    return 0;
   
}
