#include <bits/stdc++.h>
using namespace std;

void reverseR(queue<int> &q){
   
   if(q.empty()){
       return;
   }
   
   //A 
   int elm=q.front();
   q.pop();
   
   //b
   reverseR(q);
   
   //c 
   q.push(elm);
}

int main()
{
    
    queue<int> q;
    q.push(10);
     q.push(20);
      q.push(30);
       q.push(40);
       q.push(50);
       
       reverseR(q);
       
       while(!q.empty()){
           cout<<q.front()<<" ";
           q.pop();
       }
    return 0;
}
