#include <iostream>
using namespace std;
class stack{
  int front,rear;
  int *arr;
  int size;
  public:
  stack(){
      front=rear=-1;
      size=1000;
      arr=new int[size];
  }
  void enqueuefront(int ele){
      if((front==rear+1)||(front==0 && rear==size-1)){
          cout<<"overflow";
      }else if(rear==-1 && front==-1){
          rear=front=0;
          arr[front]=ele;
      }else if(front==0){
          front=size-1;
          arr[front]=ele;
      }else{
          front--;
          arr[front]=ele;
      }
  }
  void enqueuerear(int ele){
      if((front==rear+1)||(front==0 && rear==size-1)){
          cout<<"overflow";
      }else if(rear==-1 && front==-1){
          rear=front=0;
          arr[rear]=ele;
      }else if (rear==size-1){
          rear=0;
          arr[rear]=ele;
      }else{
          rear++;
          arr[rear]=ele;
      }
  }
  void popfront(){
      if( front==-1 && rear==-1 ){
          cout<<"Underflow";
          return;
      }
      else if(front==rear){
          cout<<"\nelement poped from front : "<<arr[front];
          front=rear=-1;
      }else if(front==size-1){
          cout<<"\nelement poped from front : "<<arr[front];
          front=0;
      }else{
          cout<<"\nelement poped from front : "<<arr[front];
          front++;
      }  
  }
  void poprear(){
      if( front==-1 && rear==-1 ){
          cout<<"Underflow";
          return;
      } else if(front==rear){
          cout<<"\nelement poped from front : "<<arr[rear];
          front=rear=-1;
      }else if(rear==0){
          cout<<"\nelement poped from front : "<<arr[rear];
          rear=size-1;
      }else{
          cout<<"\nelement poped from front : "<<arr[front];
          rear--;
      }
  }
  void Display(){
      if(front<0&&rear<0){
          cout<<"Underflow";
          return;
      }
      int i=front;
      while(i!=rear){
        cout<<arr[i];
        i=(i+1)%size;
      }
      cout<<arr[i];
  }
    
};
int main(){
    
    stack s;
  s.enqueuefront(1);
  s.enqueuefront(2);
  s.enqueuerear(3);
  s.enqueuerear(4);
    s.Display();
  s.popfront();
  s.poprear();
    cout<<"\nElements in Stack : "<<endl;
    s.Display();
}
