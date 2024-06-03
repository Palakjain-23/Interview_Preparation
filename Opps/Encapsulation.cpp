#include<iostream>
using namespace std;
class car{
    private:
    int tires;
    public:
    void set(int num){
        tires=num;
    }
    void get(){
        cout<<"tires: "<<tires;
    }
};
int main(){
    car c;
    c.set(4);
    c.get();
}
