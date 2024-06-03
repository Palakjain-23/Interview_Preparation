
// ---------Insertion Sort---------
//----------TC-Best-0(n)----------
//----------TC-Best--0(n2)---------
//Stable- retain order of same key of values
//Inplace- no space required

#include<iostream>
using namespace std;
void insertion_sort(int *arr,int len) {
   
    for(int i=1;i<len;i++){
        
        int j = i-1;
        int temp = arr[i];
        while( j>=0 && arr[j] > temp ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,9,3,0,2,6,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    // cout<<len<<endl;
    insertion_sort(arr,len);
}
