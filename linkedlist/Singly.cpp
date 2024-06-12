#include <iostream>
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
void insertTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}
void insertHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void display(node* head){
    while(head->next!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<head->data<<"Null";
}
void deletefront(node* &head){
    head=head->next;
}
void deleteTail(node* head){
    node* prev;
    node *forward=head;
    while(forward->next!=NULL){
        prev=forward;
        forward=forward->next;
    }
    prev->next=NULL;
}
bool search(node* head,int key){
    while(head->next!=NULL){
        if(head->data==key){
            return true;
        }
        head=head->next;
    }
    return false;
}
void insertAt(node* head,int pos,int val){
    node* n=new node(val);
    node* temp=head;
    node* prev;
    for(int i=0;i<pos;i++){
        prev=temp;
        temp=temp->next;
    }
    n->next=temp;
    prev->next=n;
}
int main()
{
    node* head=NULL;
    insertTail(head,1);
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    display(head);
    insertHead(head,0);
    insertHead(head,-1);
    insertHead(head,-2);
    cout<<endl;
    display(head);
    deletefront(head);
    cout<<endl;
    display(head);
     deleteTail(head);
    cout<<endl;
    display(head);
    if(search(head,2)){
        cout<<"\npresent";
    }else{
        cout<<"\nnot present";
    }
    insertAt(head,2,5);
    cout<<endl;
    display(head);
    return 0;
}
