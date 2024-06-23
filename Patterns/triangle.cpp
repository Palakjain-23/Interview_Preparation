#include <iostream>
using namespace std;

int main()
{
    // std::cout<<"Hello World";
    
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=0;k<=2*i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
