//-------Linear Search
//------TC-Best-O(1)
//------TC- Average -O(n)
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int key=6;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
      if(arr[i]==key){
        cout<<"element found at : "<<i;
        break;
      }
    }
}
