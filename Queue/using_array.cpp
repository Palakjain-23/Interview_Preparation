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
      if(rear==(size-1)){
        cout<<"Overflow";
        return;
      }else if(rear==-1&&front==-1){
          rear=front=0;
          arr[rear]=ele;
      }else{
          rear++;
          arr[rear]=ele;
      }
  }
  int pop(){
      if( front==-1 && rear==-1 ){
          cout<<"Underflow";
          return -1;
      }
      else if(front==rear){
          int temp=arr[front];
          return temp;
      }
      int temp=arr[front++];
      return temp;
  }
  int peek(){
      if(front<0&&rear<0){
          cout<<"Underflow";
          return -1;
      }
      return arr[front];
  }
  void Display(){
      if(front<0&&rear<0){
          cout<<"Underflow";
          return;
      }
      for(int i=front;i<=rear;i++){
          cout<<arr[i]<<" ";
      }
  }
    
};
int main(){
    
    stack s;
   s.enqueue(1);
   s.enqueue(2);
   s.enqueue(3);
   s.enqueue(4);
    
    cout<<"element deleted : "<<s.pop();
    cout<<"\ntop of stack : "<<s.peek();
    cout<<"\nElements in Stack : "<<endl;
    cout<<"\n Display : "<<endl;
    s.Display();
}
