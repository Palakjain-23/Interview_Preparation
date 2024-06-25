#include <iostream>
using namespace std;
class stack{
  int top;
  int *arr;
  int size;
  public:
  stack(){
      top=-1;
      size=1000;
      arr=new int[size];
  }
  void push(int ele){
      if(top > (size-1)){
        cout<<"Overflow";
        return;
      }
      arr[++top]=ele;
  }
  int pop(){
      if(top<0){
          cout<<"Underflow";
          return -1;
      }
      int temp=arr[top];
      top--;
      return temp;
  }
  int peek(){
      if(top<0){
          cout<<"Underflow";
          return -1;
      }
      return arr[top];
  }
  bool isEmpty(){
      return (top<0);
  }
    
};
int main(){
    
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    cout<<"element deleted : "<<s.pop();
    cout<<"\ntop of stack : "<<s.peek();
    cout<<"\nElements in Stack : "<<endl;
    while(!s.isEmpty()){
        int temp=s.peek();
        s.pop();
        cout<<temp<<" ";
    }
}
