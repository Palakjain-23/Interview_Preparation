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
  void enqueue(int ele){
      if(rear==-1 && front==-1){
          rear=front=0;
          arr[rear]=ele;
      } else if((rear+1)%size == front) {
          cout<<"queue is full";
      }else{
        rear=(rear+1)%size;
        arr[rear]=ele;
      }
  }
  void pop(){
      if( front==-1 && rear==-1 ){
          cout<<"Underflow";
          return;
      }
      else{
        cout<<"element deleted : "<<arr[front];
        front=(front+1)%size;
      }
  }
  int peek(){
      if( front==-1 && rear==-1 ){
          cout<<"Underflow";
          return -1;
      }
      return arr[rear];
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
   s.enqueue(1);
   s.enqueue(2);
   s.enqueue(3);
   s.enqueue(4);
   s.pop();
    cout<<"\ntop of stack : "<<s.peek();
    cout<<"\nElements in Stack : "<<endl;
    cout<<"\n Display : "<<endl;
    s.Display();
}
