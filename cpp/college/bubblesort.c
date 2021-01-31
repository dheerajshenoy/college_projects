#include <stdio.h>

void bubblesort(int arr[], int n);

int main() {
    
    int a[] = {5,1,2,3,7,8,6,4};
    bubblesort(a, sizeof(a)/sizeof(int));

    return 0;
}

void bubblesort(int arr[], int n) {
    int temp;
    for(int i=0; i<n; i++)
        for(int j=i; j<n-i-1; j++)
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    for(int i=0; i<n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}
