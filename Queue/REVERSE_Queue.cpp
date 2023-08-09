
#include <bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q){
    stack<int> s;
    
    while(!q.empty())
    {
    int elm=q.front();
    q.pop();
    s.push(elm);
    }
    
    while(!s.empty()){
        int elm=s.top();
        s.pop();
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
       
       reverse(q);
       
       while(!q.empty()){
           cout<<q.front()<<" ";
           q.pop();
       }
    return 0;
}
