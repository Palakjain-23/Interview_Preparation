
#include <iostream>
using namespace std;

void merge(int *arr,int l,int mid,int r){
    
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    
    for( int  i=0; i<n1; i++ ){
        a[i] = arr[l+i];
    }
    
    for( int  i=0; i<n2; i++ ){
        b[i] = arr[mid+1+i];
    }
    
    int i=0,j=0,k=l;
    while( i<n1 && j<n2 ){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++;
        }else{
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;
    }
    
    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
    }
    
}
void mergesort(int *arr,int l,int r){ 
    if(l<r){
        int mid = l+(r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }    
}

int main() {
    int arr[] = {1, 4, 2, 33, 9, 0, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, len - 1);
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
