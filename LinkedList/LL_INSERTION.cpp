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

void insertAtHead(Node* &head, Node* &tail, int data){
    
    if(head==NULL){
        Node* newnode= new Node(data);
        head=newnode;
        tail= newnode;
        return;
    }
    
    Node* newnode=new Node(data);
    newnode->next=head;
    head=newnode;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newnode= new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    
    Node* newnode=new Node(data);
    tail->next=newnode;
    tail=newnode;
}

int findLength(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtPosition(Node* &head, Node* &tail, int data,int position){
    
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    
    if(position==0)//insert at head case
    {
        insertAtHead(head,tail,data);
        return;
    }
    
    int len=findLength(head);
    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }
    
    int i=1;
    Node *prev=head;
    
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    
    Node* newnode=new Node(data);
    newnode->next=curr;
    prev->next=newnode;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    
    
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    
    
    insertAtPosition(head,tail,90,0);
    insertAtPosition(head,tail,80,4);
    insertAtPosition(head,tail,70,7);
    print(head);

    return 0 ;
}
