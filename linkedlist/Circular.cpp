#include <stdio.h>
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertBegin(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
    }else{
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
     }
     temp->next=n;
     n->next=head;
    }
  head=n;
}
void insertTail(node* &head,int val){
    
    if(head==NULL){
        insertBegin(head, val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    
}
void delFront(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    head=head->next;  
    temp->next=head;
}
void delEnd(node* &head){
    node* temp=head;
    node* prev;
    while(temp->next!=head){
        prev=temp;
        temp=temp->next;
    }
    prev->next=head;
}
int main()
{
    node* head;
    
    insertTail(head,1);
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    
    insertBegin(head,0);
    insertBegin(head,-1);
    insertBegin(head,-2);
    display(head);
    
    delFront(head);
    cout<<endl;
    display(head);
    
    delEnd(head);
    cout<<endl;
    display(head);
    
    return 0;
}
