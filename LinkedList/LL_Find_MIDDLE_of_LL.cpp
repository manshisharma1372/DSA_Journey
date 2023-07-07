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

Node* getMiddle(Node* &head){
    if(head==NULL){
        
        //0 node
        cout<<"LL is empty"<<endl;
        return head;
    }
    
    if(head->next==NULL){
        //only 1 Node
        return head;
    }
    
    //   >1 Node
    
    Node* slow=head;
    Node* fast=head->next;
    
    while(slow !=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
    }
    return slow;
    
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
    
    cout<<"MIddle node:" <<getMiddle(head)->data<<endl;
 
    

    return 0;
}