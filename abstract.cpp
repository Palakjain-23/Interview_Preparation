/*
 Abstract class
 It is class that acts as a blue print for other classes  and we cannot instatiate these class 
*/
#include<iostream>
using namespace std;
class shape{
    virtual void draw()=0;
};
class rectangle:public shape{
  public:
  void draw(){
      cout<<"rectangle";
  }
};
class circle:public shape{
  public:
  void draw(){
      cout<<"circle";
  }
};
int main(){
    rectangle r;
    r.draw();
    circle c;
    c.draw();
}
