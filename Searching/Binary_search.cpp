//-------Binary Search-----Recursive
//------TC-Best-O(1)
//------TC-Avg/Worst-0(log(n))
//------SC-0(1)
#include<iostream>
using namespace std;

int Binary_search(int *arr,int l,int r,int key){
    if(r>=l){
        int mid = l+(r-l)/2;
        if( arr[mid]==key ){
            return mid;    
        }
        if( key < arr[mid] ){
           return Binary_search(arr,l,mid-1,key);
        }
             return Binary_search(arr,mid+1,r,key);
      }
}   

//-------Binary Search----Iterative
//------TC-Best-0(log(n))
//------SC-0(1)

int binary(int *arr,int len,int key) {
  int l=0,r=len;
  while(l<r){
    int mid = l+(r-l)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        l=mid+1;
    }else{
        r=mid-1;
    }
  }
  return -1;
}
int main(){
    int key=6;
    int arr[]={1,2,3,4,5,6,7,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    int res=binary(arr,len,key);
    //int res=binary_search(arr,len,key);
    if(res==-1)
    {
        cout<<"not found";
    }else{
        cout<<"found at "<<res;
    }
}
