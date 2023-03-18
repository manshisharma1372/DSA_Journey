#include <bits/stdc++.h>

using namespace std;

int main()
{
    char name[100];
    cin>>name;
    
    int len=0;
    for(int i=0;name[i]!='\0';i++){
        len++;
    }
    
    cout<<len<<" ";
    cout<<strlen(name)<<" ";
    return 0;
}
