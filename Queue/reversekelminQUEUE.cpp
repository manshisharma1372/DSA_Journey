
#include <bits/stdc++.h>
using namespace std;

void reverseKelm(queue<int> &q,int k){
    
    stack<int> s;
    int n=q.size();
    
    //edge case
    if(k<=0 || k>n){
        return;
    }
    
    //A put k elm in stack
    int count=0;
    while(!q.empty()){
        
        int temp=q.front();
        q.pop();
        s.push(temp);
        count++;
        
        if(count==k){
            break;
        }
        
    }
    
    //B put back k elm in queue
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    
    //c leftouut elm nikaalo waps push kro queue     
    
    count=0;
    while(!q.empty() && n-k!=0){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        
        if(count==n-k){
            break;
        }
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
            
            int k=3;
            
    reverseKelm(q,k);   
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
        
    return 0;
    
}
