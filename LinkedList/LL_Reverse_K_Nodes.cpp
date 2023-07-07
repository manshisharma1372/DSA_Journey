#include <bits/stdc++.h>

using namespace std;


class Node{
    
 public:
 
 int data;
 Node* next;
 
 Node(){
     this->data=0;
     this->next=NULL;
 }
 
 Node(int data){
     this->data=data;
     this->next=NULL;
 }
    
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
     
        cout<<temp->data<<" ";
        temp=temp->next;
       
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    
    Node* newnode=new Node(data);
    tail->next=newnode;
    tail=newnode;
    
}

int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

Node* reverseKNode(Node* &head,int k){
    if(head==NULL){
        
        //0 node
        cout<<"LL is EMpty"<<endl;
        return NULL;
    }
    
    if(head->next==NULL){
        
        //1 Node
        return head;
        
    }
    
    int len=findLength(head);
    
    if(k>len){
      //  cout<<"enter valid val of k"<<endl;
        return head;
    }
    
    //no of nodes in ll >=K 
    
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    
    if(forward!=NULL){
        //we still have nodes to reverseKNode
          head->next= reverseKNode(forward,k);
    }
 
    return prev;
    
    
    
    
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,60);
    
    print(head);
    cout<<endl;
    
    int k=3;
    head=reverseKNode(head,k);
    print(head);
    

    return 0;
}