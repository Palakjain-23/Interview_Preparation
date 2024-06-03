
// ---------Quick Sort---------
//----------TC-Best-0(nlogn)----------
//----------TC-Best--0(n2)---------
//InStable - retain order of same key of values
// Inplace - No  space required

#include <iostream>
using namespace std;

int partition(int *arr, int s, int e) {
    int pivot = arr[s];
    int l = s + 1;
    int r = e;

    while (l <= r) {
        while (l <= r && arr[l] <= pivot) {
            l++;
        }
        while (l <= r && arr[r] > pivot) {
            r--;
        }
        if (l < r) {
            swap(arr[l], arr[r]);
        }
    }
    swap(arr[s], arr[r]);
    return r;
}

void Quicksort(int *arr, int s, int e) {
    if (s < e) {
        int loc = partition(arr, s, e);
        Quicksort(arr, s, loc - 1);
        Quicksort(arr, loc + 1, e);
    }
}

int main() {
    int arr[] = {1, 4, 2, 33, 9, 0, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    Quicksort(arr, 0, len - 1);
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
