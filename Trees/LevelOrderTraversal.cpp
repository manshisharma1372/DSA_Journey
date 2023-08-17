#include<bits/stdc++.h>
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
    cout<<"Enter data"<<endl;
    cin>>data;
    
    if(data==-1){
        return NULL;
    }
    //A create root node
    Node* root=new Node(data);
    
    //B left Node
    cout<<"Enter data for left side of "<<data<<endl;
    root->left=buildTree();
    
    //c right Node
    cout<<"enter data for right side of "<<data<<endl;
    root->right=buildTree();
    
    return root;
    
}

void levelOrderTraversal(Node* root){
    
    queue<Node*> q;
    
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        
        if(temp->right){
            q.push(temp->right);
          }
        }
       
    }
    
}


int main(){
    
    Node* root=NULL;
    root=buildTree();
    
    levelOrderTraversal(root);
    
    return 0;
}