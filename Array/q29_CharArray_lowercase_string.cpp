#include <bits/stdc++.h>
using namespace std;

void lower(char name[]){

    int n=strlen(name);
    for(int i=0;i<n;i++){
        
        if(name[i]>='A' && name[i]<='Z'){
        name[i]=name[i]-'A'+'a';
        }
    }
   
}

int main()
{
    char name[100];
    cin.getline(name,100);
    lower(name);
    cout<<name;
    return 0;
}