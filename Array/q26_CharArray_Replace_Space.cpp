#include <bits/stdc++.h>
using namespace std;

void replace_space(char name[]){
    
    int i=0;
    int n=strlen(name);
    int j=n-1;
    
   for(int i=0;i<n;i++){
       if(name[i]==' '){
           name[i]='@';
       }
   }
}

int main()
{
    char name[100];
    cin.getline(name,100);
    
    replace_space(name);
    
    cout<<name;
    return 0;
}