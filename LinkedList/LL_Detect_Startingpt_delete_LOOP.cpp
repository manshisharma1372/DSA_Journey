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


int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

bool checkForLoop(Node* &head){
    if(head==NULL){
        cout<<"ll is empty";
        return false;
    }
    
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
        if(slow==fast){
            
            //loop hai
            return true;
        }
    }
    return false;
}

Node* startingPt(Node* &head){
    if(head==NULL){
        cout<<"ll is empty";
        return NULL;
    }
    
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
        if(slow==fast){
            //loop
            slow=head;
            break;
            
        }
    }
        
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
}


Node* removeLoop(Node* &head){
    if(head==NULL){
        cout<<"ll is empty";
        return NULL;
    }
    
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
        if(slow==fast){
            //loop
            slow=head;
            break;
            
        }
    }
        Node* prev=fast;
        while(slow!=fast){
            prev=fast;
            slow=slow->next;
            fast=fast->next;
        }
        prev->next=NULL;
        return slow;
}



int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    Node* seventh=new Node(70);
    Node* eighth=new Node(80);
    Node* ninth=new Node(90);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=fifth;
    
    
    //print(head);
    
    cout<<checkForLoop(head);
    cout<<endl;
    
    cout<<startingPt(head)->data;
    cout<<endl;
    
    removeLoop(head);
    print(head);
    
    

    return 0;
}