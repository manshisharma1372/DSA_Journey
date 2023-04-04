#include <bits/stdc++.h>
using namespace std;




void print_digits(int n){
     
     if(n==0){
         return;
     }

   
    print_digits(n/10);
    int last_digit=n%10;
    cout<< last_digit<<" ";
}

int main()
{
  
   int n;
   cin>>n;
   if(n==0)
   cout<<0<<endl;
   print_digits(n);
   
    return 0;
}
