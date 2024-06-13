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
void push(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void pop(node* &head){
   node* temp=head;
   cout<<"\nPopped ele : "<<temp->data<<endl;
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
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,4);
    display(head);
    pop(head);
    peek(head);
    isEmpty(head)==1?cout<<"\nEmpty\n":cout<<"\nNot Empty\n";
    display(head);
}
