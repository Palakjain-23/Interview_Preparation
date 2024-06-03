//---------overiding------
#include<iostream>
using namespace std;
class base{
    public:
    void print(){
        cout<<"base class print method"<<endl;
    }
    void show(){
        cout<<"base class show method"<<endl;
    }
};
class derived:public base{
    public:
   void print(){
    cout<<"derived class print method"<<endl;
   }
   void show(){
    cout<<"derived class show method"<<endl;
   }
};

int main(){
    derived d;
    d.print();
    d.show();
    base bptr;
    bptr.print();
    bptr.show();
    
}
//---------virtual function-----

#include<iostream>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"base class print method"<<endl;
    }
    void show(){
        cout<<"base class show method"<<endl;
    }
};
class derived:public base{
    public:
   void print(){
    cout<<"derived class print method"<<endl;
   }
   void show(){
    cout<<"derived class show method"<<endl;
   }
};

int main(){
    derived d;
    base *bptr;
    bptr = &d;
    bptr->print();
    bptr->show();
}
