#include <iostream>

using namespace std;

class TestAbstraction {
    private: string x, y;

    public:
        // method to set values of 
        // private members
        void set(string a, string b) {
            x = a;
            y = b;
        }
    //printing values  
    void print() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    // object of TestAbstraction
    TestAbstraction t1;
    t1.set("Scaler", "Academy");
    t1.print();

    return 0;
}
