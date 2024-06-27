#include <iostream>
using namespace std;
class TestAbstraction{ 
    private: string x, y;
    public:
        void set(string a, string b) {
            x = a;
            y = b;
        }  
    void print() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    TestAbstraction t1;
    t1.set("Scaler", "Academy");
    t1.print();
    return 0;
}
