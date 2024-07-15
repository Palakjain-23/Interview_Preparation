#include<iostream>
using namespace std;
class Operation{
    int a;
    protected:
    int b;
    public:
    Operation(int a, int b){
        this->a = a;
        this->b = b;
    }
    friend void add(Operation &obj);
};
void add(Operation &obj){
    cout<<obj.a+obj.b;
}
int main(){
  Operation O(2,4);
    add(O);
}
