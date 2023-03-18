#include <bits/stdc++.h>

using namespace std;

void reverse_string(char name[]){
    
    int i=0;
    int n=strlen(name);
    int j=n-1;
    
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

int main()
{
    char name[100];
    cin>>name;
    
    reverse_string(name);
    
    cout<<name;
    return 0;
}
