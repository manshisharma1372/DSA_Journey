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


void insertAtHead(Node* &head, Node* &tail,int data){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    
    //step1 create
    Node* newnode=new Node(data);
    
    //step 2 new node se head ka link
    newnode->next=head;
    
    //step3 head se new node ka link
    head->prev=newnode;
    
    //update head
    head=newnode;
    
}

 void insertAtTail(Node* &head , Node* &tail,int data){
     if(head==NULL){
         Node* newnode=new Node(data);
         head=newnode;
         tail=newnode;
         return;
     }
     
     //step 1 create a Node
     Node* newnode=new Node(data);
     
     //step 2 connet tail ka next to  new Node
        tail->next=newnode;
      
     //step 3 connect newnode ka prev to tail
        newnode->prev=tail;
        
     
     //step 4 Update tail
     tail=newnode;
     
 } 
 
 
 void insertAtPosition(Node* &head, Node* &tail,int data,int position){
     if(head==NULL){
         Node* newnode=new Node(data);
         head=newnode;
         tail=newnode;
         return;
     }
     
     if(position==1){
         insertAtHead(head,tail,data);
         return;
     }
     
     int len=findLength(head);
     if(position>len){
         insertAtTail(head,tail,data);
         return;
     }
     
     int i=1;
     Node* prevnode=head;
     while(i<position-1){
         prevnode=prevnode->next;
         i++;
     }
     Node* currnode=prevnode->next;
     
     Node* newnode=new Node(data);
     prevnode->next=newnode;
     newnode->prev=prevnode;
     currnode->prev=newnode;
     newnode->next=currnode;
 }

int main()
{

    Node* first= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    
    Node* head=first;
    Node*tail=third;
    
    first->next=second;
    second->prev=first;
    
    second->next=third;
    third->prev=second;
    
    print(first);
    
    cout<<endl;
    
    insertAtHead(head,tail,101);
    print(head);
    cout<<endl;
    
    insertAtTail(head,tail,201);
    print(head);
    cout<<endl;
    
    insertAtPosition(head,tail,401,1);
    insertAtPosition(head,tail,901,4);
    print(head);

    return 0;
}
