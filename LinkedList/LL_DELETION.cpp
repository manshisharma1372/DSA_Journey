#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
    ~Node(){
        cout<<"Node del "<<this->data<<endl;
    }
    
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
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



void deleteNode(Node* &head, Node* &tail, int position){
    if(head==NULL){
        cout<<"cannot del LL is Empty";
          return;
    }
  
    //del first node
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    
    
    //del last node
    int len=findLength(head);
    if(position==len){
        
        int i=1;
        Node* prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        
        prev->next=NULL;
        Node*temp=tail;
        tail=prev;
        delete temp;
        return;
    }
    
    //del middle node
    
    Node* prev=head;
    int i=1;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    
}

int main(){
    
    Node* head=NULL;
    Node* tail=NULL;
    
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    print(head);
    cout<<endl;
    
   // deleteNode(head,tail,4);
    deleteNode(head,tail,1);
    print(head);
    
    
}