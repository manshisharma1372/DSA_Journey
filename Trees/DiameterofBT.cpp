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

int heightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    
    int leftHeight=heightOfTree(root->left);
    int rightHeight=heightOfTree(root->right);
    int ans= max(leftHeight,rightHeight)+1;
    
    return ans;
}

int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=heightOfTree(root->left)+heightOfTree(root->right);
    
    int ans=max({op1,op2,op3});
    return ans;
}


int main(){
    
    Node* root=NULL;
    root=buildTree();
    
    levelOrderTraversal(root);
    
    cout<<endl;
    cout<<heightOfTree(root);
    
    cout<<endl;
    cout<<diameter(root);
    
    return 0;
}