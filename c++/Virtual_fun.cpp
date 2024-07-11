/*------Virtual Function----------
    they are the member function of a class and they are to be reimplemented in derived class
    They are written with virtual keyword
    */
#include<iostream>
using namespace std;
class Student1{
    public:
    int rollno=5;
    virtual void getdetails(){
        cout<<rollno;
    }
};
class Student2:public Student1{
    
    public:
    string name="palak";
    void getdetails(){
        cout<<"name"<<name;
    }
};
int main(){
    Student1  *s1;
    Student2 s2;
    s1=&s2;
    s1->getdetails();
}
