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

Node* reverse(Node* head){
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


Node* solve(Node* &head1 ,Node*&head2){
    
    if(head1==NULL){
        return head2;
    }
    
    if(head2==NULL){
        return head1;
    }
    
    //step1 reverse both 
    head1=reverse(head1);
    head2=reverse(head2);
    
    
    
    //step 2 add both ll
    Node* ansHead=NULL;
    Node* ansTail=NULL;
    
    int carry=0;
    
    while(head1!=NULL && head2!=NULL){
        
        //calc sum
        int sum=carry+head1->data+head2->data;
        
        //calc digit 
        int digit=sum%10;
        
        //calc carry
        carry=sum/10;
        
        //creating new node for digit
        Node* newnode=new Node(digit);
        
        //attach newnode in ans waali ll
        if(ansHead==NULL){
            //first Node 
            
            ansHead=newnode;
            ansTail=newnode;
        }
        else{
            ansTail->next=newnode;
            ansTail=newnode;
        }
        
        head1=head1->next;
        head2=head2->next;
        
    }
    
    
    //head1 ka size bada tha head2 se
    while(head1!=NULL){
        
        int sum=carry+head1->data;
        int digit=sum%10;
        carry=sum/10;
        Node* newnode=new Node(digit);
        ansTail->next=newnode;
        ansTail=newnode;
        head1=head1->next;
    }
    
    //head2 list ki len head1 se jyada h
     while(head2!=NULL){
        
        int sum=carry+head2->data;
        int digit=sum%10;
        carry=sum/10;
        Node* newnode=new Node(digit);
        ansTail->next=newnode;
        ansTail=newnode;
        head2=head2->next;
    }
    
    //handle carry if both ll finish
    
    while(carry!=0){
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;
        Node* newnode=new Node(digit);
        ansTail->next=newnode;
        ansTail=newnode;
    }
    
    //reverse ans ll
    
    ansHead=reverse(ansHead);
    return ansHead;
   
}

int main()
{
    
   
    Node* head1=NULL;
    Node* tail1=NULL;
    insertAtTail(head1,tail1,2);
    insertAtTail(head1,tail1,4);
    print(head1);
    cout<<endl;
    
    Node* head2=NULL;
    Node* tail2=NULL;
    insertAtTail(head2,tail2,2);
    insertAtTail(head2,tail2,3);
    insertAtTail(head2,tail2,4);
    print(head2);
    cout<<endl;
    
    Node* ans=solve(head1,head2);
    print(ans);
 
   

    return 0;
}
