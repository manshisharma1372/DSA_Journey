
#include <bits/stdc++.h>
using namespace std;

void interleaving(queue<int> &q){
    
   int n=q.size();
   if(q.empty()){
       return;
   }
   int k=n/2;
   int count=0;
   queue<int> q2;
   
   
   //seperate queue 
   while(!q.empty()){
       int temp=q.front();
       q.pop();
       q2.push(temp);
       count++;
       if(count==k){
           break;
       }
   }
   
   //interleave
   while(!q.empty() && !q2.empty()){
       int first=q2.front();
       q2.pop();
       q.push(first);
       
       int second=q.front();
       q.pop();
       q.push(second);
   }
   
   //odd case
   if(n&1){
       int elm=q.front();
       q.pop();
       q.push(elm);
   }
    
}

int main()
{
    queue<int> q;
    q.push(10);
      q.push(20);
        q.push(30); 
        q.push(40);
          q.push(50);
            q.push(60);
            

    interleaving(q);   
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
        
    return 0;
    
}
