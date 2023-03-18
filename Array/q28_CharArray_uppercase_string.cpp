#include <bits/stdc++.h>
using namespace std;

void upper(char name[]){

    int n=strlen(name);
    for(int i=0;i<n;i++){
        
        if(name[i]>='a' && name[i]<='z'){
        name[i]=name[i]-'a'+'A';
        }
    }
   
}

int main()
{
    char name[100];
    cin.getline(name,100);
    upper(name);
    cout<<name;
    return 0;
}