#include <stdio.h>

void binarysearch(int arr[], int n, int key);

int main() {
    int arr[] = {0, 1, 2, 5, 6, 10}, key = 6;
    binarysearch(arr, sizeof(arr)/sizeof(int), key);
    return 0;
}

void binarysearch(int arr[], int n, int key) {
    
    int m, l, pos = -1;
    m = n/2;

    if(arr[m] < key)
        l = m + 1;
    else
        n = m - 1;
    
    for(int i=l; i<n; i++)
        if(arr[i] == key)
            pos = i;

    printf("%d\n", pos);

}
