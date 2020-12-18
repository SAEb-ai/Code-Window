#include <iostream>
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

//Iterative Approach 
node* reverse(node* &head){
  node* preptr=NULL;
  node* currptr=head;
  node* nextptr;
  while(currptr!=NULL){
    nextptr=currptr->next;
    currptr->next=preptr;
    preptr=currptr;
    currptr=nextptr;
  }
  return preptr;
}

//Recursive Approach
node* recrev(node* &head){
  if(head==NULL||head->next==NULL)
    return head;
  node* curr=recrev(head->next);
  head->next->next=head;
  head->next=NULL;
  return curr;
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
    head=reverse(head);
    display(head);
    cout<<endl;
    insertAtTail(head,10);
    head=recrev(head);
    display(head);
    return 0;
}
