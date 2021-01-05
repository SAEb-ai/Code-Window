#include <bits/stdc++.h>
using namespace std;

class node{
  public:
    int x;
    node* next;
    node(int n){
      x=n;
      next=NULL;
    }
};

void insertAtTail(node* &head,int x){
  node* temp=new node(x);
  if(head==NULL){
    head=temp;
    return;
  }
  node* dhead=head; 
  while(dhead->next!=NULL){
    dhead=dhead->next;
  }
  dhead->next=temp;
}

void insertAtHead(node* &head,int x){
  node* temp=new node(x);
  temp->next=head;
  head=temp;
}

void display(node* &head){
  node* dhead=head;
  while(dhead!=NULL){
    cout<<dhead->x<<" ";
    dhead=dhead->next;
  }
  
}

void deleteAtHead(node* &head){
  node* temp=head;
  head=head->next;
  delete temp;
}
void deleteOp(node* &head,int data){
  if(head==NULL){
    return;
  }
  if(head->next==NULL){
    deleteAtHead(head);
    return;
  }
  node* temp=head;
  while(temp->next->x!=data){
    temp=temp->next;
  }
  node* dtemp=temp->next;
  temp->next=temp->next->next;
  delete dtemp;
}
node* revK(node* &head,int k){
   node* preptr=NULL;
  node* currptr=head;
  node* nextptr;
  int count=0;
  while(currptr!=NULL && count<k){
    nextptr=currptr->next;
    currptr->next=preptr;
    preptr=currptr;
    currptr=nextptr;
    count++;
  }
  if(nextptr!=NULL)
  head->next=revK(nextptr,k);
  return preptr;
}

void makeCycle(node* &head,int pos){
  
  node* dhead=head;
  node* startnode;
  int count=1;
  while(dhead->next!=NULL){
    if(count==pos)
      startnode=dhead;
    dhead=dhead->next;
    count++;
  }
  dhead->next=startnode;
}

bool detectCycle(node* &head){
  node* slow=head;
  node* fast=head;
  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow)
      return true;
  }
  return false;
}

void removeCycle(node* &head){
  node* slow=head;
  node* fast=head;
  
  do{
     slow=slow->next;
    fast=fast->next->next;
  }while(slow!=fast);
  fast=head;
  while(slow->next!=fast->next){
     slow=slow->next;
    fast=fast->next;
  }
  slow->next=NULL;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    cout<<endl;
    insertAtHead(head,5);
    display(head);
    cout<<endl;
    makeCycle(head,2);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    return 0;
}
