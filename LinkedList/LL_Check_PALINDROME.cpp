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

Node*  reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    
    return prev;
}

bool isPalindrome(Node* &head){
    
    if(head==NULL || head->next==NULL){
        return true;
    }
    
    //step 1 find middle node
    
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    
    // reverse ll after middle
    
    Node* reverseLLafterMidHead=reverse(slow->next);
    
    //can skip joining it
   // slow->next=reverseLLafterMidHead;
    
    Node* temp1=head;
    Node* temp2=reverseLLafterMidHead;

    
    while(temp2!=NULL && temp1!=NULL){
        
        if(temp1->data!=temp2->data){
         
        return false;
     
        }
           temp1=temp1->next;
            temp2=temp2->next;
         
        
    }
    return true;
   
}

int main()
{
    
    Node* head=NULL;
    Node* tail=NULL;
    
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,10);
    
    print(head);
    cout<<endl;
    
    cout<<isPalindrome(head);
    
    
    

    return 0;
}
