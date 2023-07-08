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

void removeDuplicate(Node* &head){
    
    if(head==NULL || head->next==NULL){
        return;
    }
    Node* curr=head;
    
    while(curr!=NULL){
        if( (curr->next!=NULL) && (curr->data==curr->next->data) ){
          
            Node* temp=curr->next;
              curr->next=curr->next->next;
              
              //del Node
              temp->next=NULL;
              delete temp;
        }
        
        curr=curr->next;
        
    }
    
    
}



int main()
{
    
    Node* head=NULL;
    Node* tail=NULL;
    
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,50);
    
    print(head);
    cout<<endl;
    
    
    removeDuplicate(head);
    print(head);
    
    

    return 0;
}
