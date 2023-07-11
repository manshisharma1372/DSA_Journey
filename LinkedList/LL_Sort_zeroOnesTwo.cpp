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

/*

void sortZeroonetwo(Node* &head){
    
    int zeroct=0;
    int onect=0;
    int twoct=0;
    
    Node* temp=head;
    
    while(temp!=NULL){
        
        if(temp->data==0)
            zeroct++;
        
        else if(temp->data==1)
            onect++;
        
        else if(temp->data==2)
            twoct++;
        
        temp=temp->next;
    }
    
    
    //fill zero one two in ll
    
    Node* temp1=head;
    
        //fill zero
        while(zeroct--){
            temp1->data=0;
            temp1=temp1->next;
        }
     
        //fill one
        while(onect--){
            temp1->data=1;
            temp1=temp1->next;
        }
   
        //fill two
        while(twoct--){
            temp1->data=2;
            temp1=temp1->next;
        }
    
    
}
*/

Node* sort2(Node* &head){
    
    if(head==NULL){
        return NULL;
    }
    
    Node* zerohead=new Node(-1);
    Node* zerotail=zerohead;
    
     Node* onehead=new Node(-1);
    Node* onetail=onehead;
    
    Node* twohead=new Node(-1);
    Node* twotail=twohead;
    
   


//traverse ll
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            
            //seperate the 0 waali node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            
            //append this node to zerohead ll
            zerotail->next=temp;
            zerotail=temp;
            
        }
        else if(curr->data==1){
            
             //seperate the 1 waali node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            
            //append this node to zerohead ll
            onetail->next=temp;
            onetail=temp;
            
        }
        else if(curr->data==2){
    
             //seperate the 2 waali node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            
            //append this node to zerohead ll
            twotail->next=temp;
            twotail=temp;
        }
    }

    //all ll ready

    //join them nd remove dummy Node
    
    //modify one waali
    Node*temp=onehead;
    onehead=onehead->next;
    temp->next=NULL;
    delete temp;
    
    
    //modify two waali
    temp=twohead;
    twohead=twohead->next;
    temp->next=NULL;
    delete temp;
    
    
    //join list 
    
    if(onehead !=NULL){
        zerotail->next=onehead;
        
        if(twohead!=NULL){
            onetail->next=twohead;
        }
    }
    
    
    //one waali list is empty
    else{
        if(twohead!=NULL){
            zerotail->next=twohead;
        }
    }
    
    //remove zero head dummy Node
    
    temp=zerohead;
    zerohead=zerohead->next;
    temp=NULL;
    delete temp;
    
    return zerohead;
    
    

}


int main()
{
    
    Node* head=NULL;
    Node* tail=NULL;
    
    insertAtTail(head,tail,0);
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,0);
    insertAtTail(head,tail,2);
     insertAtTail(head,tail,1);
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,0);
    
    print(head);
    cout<<endl;
    
   // sortZeroonetwo(head);
  //  print(head);
    cout<<endl;
    
    head=sort2(head);
    print(head);
    
    

    return 0;
}
