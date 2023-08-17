#include <bits/stdc++.h>

using namespace std;

class Node{
    
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree(){
    
    int data;
    cout<<"enter data"<<endl;
    cin>>data;
    
    //Base case
    if(data==-1){
        return NULL;
    }
    
    //step A create root Node
    Node* root=new Node(data);
    
    //step 2 call left
    cout<<"Enter data for left side of"<<data<<endl;
    
    root->left=buildTree();
    
    //step 3 call right
    cout<<"enter data for right side of"<<data<<endl;
    
    root->right=buildTree();
    
    return root;
    
    
}

int main()
{
    Node* root=NULL;
    
    root=buildTree();
    

    return 0;
}
