#include <bits/stdc++.h>
using namespace std;

class node{
  public:
    int data;
    node* prev;
    node* next;
    node(int x){
      data=x;
      next=NULL;
      prev=NULL;
    }
};
void insertAtHead(node* &head,int z){
 
 node* p=new node(z);
 p->next=head;
 if(head!=NULL)
 head->prev=p;
 head=p;
}

void insertAtTail(node* &head,int n){
  node* p=new node(n);
  if(head==NULL){
    insertAtHead(head,n);
    return;
  }
  node* dhead=head;
  while(dhead->next!=NULL){
    dhead=dhead->next;
  }
  p->prev=dhead;
  dhead->next=p;
}

void deleteAtFirst(node* &head){
  node* todelete=head;
  head=head->next;
  head->prev=NULL;
  delete todelete;
}

void deleteN(node* &head,int pos){
  int count=1;
  node* dhead=head;
  if(pos==1){
    deleteAtFirst(head);
    return;
  }
  
  while(dhead->next!=NULL && count!=pos){
    dhead=dhead->next;
    count++;
  }
  dhead->prev->next=dhead->next;
  if(dhead->next!=NULL)
  dhead->next->prev=dhead->prev;
  delete dhead;
}

void display(node* &head){
  node* dhead=head;
  while(dhead!=NULL){
    cout<<dhead->data<<" ";
    dhead=dhead->next;
  }
}
int main()
{
    node* head=NULL;
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    cout<<endl;
    insertAtHead(head,2);
    display(head);
    cout<<endl;
    deleteN(head,2);
    display(head);
    cout<<endl;
    deleteN(head,1);
    display(head);
    
    
    return 0;
}
