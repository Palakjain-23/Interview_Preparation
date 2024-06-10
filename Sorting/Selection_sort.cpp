// ---------Selection Sort---------
//----------TC-Best-0(n2)----------
//InStable- donot retain order of same key of values
//Inplace- no space required
#include<iostream>
using namespace std;
void selection_sort(int *arr,int len) {
    int j;
    for( int i=0 ; i<len-1 ; i++)
    {
        int min=i;
        for(j=i+1;j<len;j++){
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,9,3,0,2,6,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    // cout<<len<<endl;
    selection_sort(arr,len);
}
