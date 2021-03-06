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
    deleteOp(head,3);
    display(head);
    return 0;
}
