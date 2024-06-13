

#include<iostream>
using namespace std;
void bubble_sort(int *arr,int len) {
    for (int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
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
    bubble_sort(arr,len);
    
}
