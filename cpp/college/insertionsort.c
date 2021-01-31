#include <stdio.h>

void insertionsort(int arr[], int n);

int main() {
    int arr[] = {8,3,2,4,5,1}, n;
    n = sizeof(arr)/sizeof(int);
    insertionsort(arr, n);
}

void insertionsort(int arr[], int n) {
   
    int key, i, j;

    for(int i=0; i<n; i++) {
        key = arr[i];
        j = i - 1;
        while(j>=0 && key < arr[j]) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }

    for(int i=0; i<n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}
