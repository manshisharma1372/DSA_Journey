#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    queue<int> q ;
    
    //inserrtion
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    
    //size_t
    
    cout<<"size is "<<q.size()<<endl;
    
    // pop or deletion
    
    q.pop();
    
    //check empty or not
    if(q.empty()){
        cout<<"Q is empty"<<endl;
    }
    
    else{
        cout<<"Q is not empty"<<endl;
    }
    
    //check front elm
    
    cout<<q.front()<<endl;
    return 0;
}
