#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str="axxxxyyyyb";
    string part="xy";
    
    int pos=str.find(part);
    while(pos!=string::npos){
        
        str.erase(pos,part.length());
           pos=str.find(part);
    }

    cout<<str;
    return 0;
}
