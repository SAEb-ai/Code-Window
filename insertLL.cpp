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
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    cout<<endl;
    insertAtHead(head,5);
    insertAtHead(head,6);
    display(head);
}
