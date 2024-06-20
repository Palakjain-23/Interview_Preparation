#include <iostream>
using namespace std;
int main() {
    int n = 5; // Number of rows
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    cout<<endl;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=i;k<n;k++){
            cout<<"*"; 
        }
        cout<<endl;
    }
    return 0;
}
