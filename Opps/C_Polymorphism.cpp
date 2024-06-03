#include <iostream>
using namespace std;
//----Function Overloading----------
class Area{
private:
int l,b,r;
public:
void area(int l,int b){
   cout<<l*b<<endl;
}
void area(int r){
    cout<<3.14*r*r<<endl;
}
};

//-------Operator Overoading-------------

class Complex {
private:
    int real, imag;
 
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << endl; }
};

int main(){
    Area obj;
    obj.area(1,1);
    obj.area(2);
    Complex C1(10,4),C2(2,9);
    Complex C3=C1+C2;
    C3.print();
}



