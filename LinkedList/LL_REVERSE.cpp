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

Node* reverseLL(Node* &prev,Node* &curr){
    
    if(curr==NULL){
        //LL revserse ho chuki
        return prev;
    }
    
    Node* forward=curr->next;
    curr->next=prev;
    
    reverseLL(curr,forward);

}

Node* rev(Node* &head){
    
    Node* prev=NULL;
    Node* curr= head;
    
    while(curr!=NULL){
        
        Node* forward=curr->next;
        
        curr->next=prev;
        prev=curr;
        curr=forward;
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
    
    print(head);
    cout<<endl;
    
  //   Node* prev=NULL;
  //  Node*curr=head;
    
   // head=reverseLL(prev,curr);
   
   head=rev(head);
    print(head);
    

    return 0;
}