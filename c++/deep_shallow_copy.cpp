    // Shallow Copy~~~~~~~~~~~~~~~

    //when the properties of the object is copied to another object then shallow copy is created


    //Deep Copy~~~~~~~~~~~~~~~~~~~

    //it not only copy the properties of the object but also make the copy of dynamically allocated memory
#include<iostream>
using namespace std;
class copies{
  public:
  string name;
  int *rollno;
  copies(string nm,int r){
        name=nm;
        rollno = new int;
        *rollno=r;
  }
  copies(copies &c1){
      name = c1.name;
      rollno = new int; 
      *rollno = *c1.rollno;
  }
  
  void get(){
      cout<<"name : "<<name;
      cout<<endl<<"rollno : "<<*rollno;
  }
};
int main(){
    copies c("palak",12);
    copies c1(c);
    c.get();
    c1.name="_Pragma";
    *(c1.rollno)=14;
    c1.get();
}
