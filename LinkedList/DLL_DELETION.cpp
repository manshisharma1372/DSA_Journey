#include <bits/stdc++.h>

using namespace std;

class Node{
    
    
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
        
    }
    
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    
    ~Node(){
        cout<<"node with value "<<this->data<<"deleted"<<endl;
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

void insertAtTail(Node* &head, Node* &tail,int data){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    
    Node* newnode=new Node(data);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void deletionfromPos(Node* &head, Node* &tail,int position){
    
    if(head==NULL){
        cout<<"cannot del DLL is empty";
        return;
    }
    
    if(head->next==NULL){
        
        //single Node
        Node* temp=head;
        head=NULL;
        temp=NULL;
        delete temp;
        return;
    }
    
    if(position==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    
    int len=findLength(head);
    
    if(position>len){
        cout<<"invalid position"<<endl;
        return;
    }
    if(position==len){
        //last node 
        
         Node* temp=tail;
         tail=tail->prev;
         temp->prev=NULL;
         tail->next=NULL;
         delete temp;
         return;
        
    }
    
    //delete from middle 
      Node* left=head;
      int i=1;
      while(i<position-1){
          left=left->next;
          i++;
      }
      Node* curr=left->next;
      Node*right=curr->next;
      
      left->next=right;
      right->prev=left;
      curr->prev=NULL;
      curr->next=NULL;
      delete curr;
    
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    print(head);
    cout<<endl;
    deletionfromPos(head,tail,3);
    print(head);

    return 0;
}