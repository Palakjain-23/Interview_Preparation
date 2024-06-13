#include<iostream>
using namespace std;
class node{
  public:
   int data;
   node* next;
   node(int data){
       this->data=data;
       next=NULL;
   }
};
void Enqueue(node* &head,int val){
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
    n->next=NULL;
}
void Dequeue(node* &head){
   node* temp=head;
   cout<<"\nDequeueped ele : "<<temp->data<<endl;
   head=temp->next;
   temp->next=NULL;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<"NULL";
}
void peek(node* head){
    cout<<endl<<"Peek ele : "<<head->data;
}
bool isEmpty(node* head){
    return (head->next==NULL);
}
int main(){
    node* head;
    Enqueue(head,1);
    Enqueue(head,2);
    Enqueue(head,3);
    Enqueue(head,4);
    display(head);
    Dequeue(head);
    peek(head);
    isEmpty(head)==1?cout<<"\nEmpty\n":cout<<"\nNot Empty\n";
    display(head);
}
