#include <stdio.h>
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insert(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    n->next = head;
    head->prev = n;
    head = n;
}
void del(node* &head,int pos){
    int c=0;
    node* temp=head;
    while(c!=pos-1){
        temp=temp->next;
        c++;
    }
    // cout<<temp->data;
   node* prevnode=temp->prev;
   node* nextnode=temp->next;
   nextnode->prev=prevnode;
   prevnode->next=nextnode;
    
}
void display(node* head){
    while(head->next!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<head->data;
}
int main(){
    
    node* head;
    
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);

    display(head);
    del(head,3);//3 is pos
    cout<<endl;
    display(head);

}
