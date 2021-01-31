#include <stdio.h>

int linear_search(int arr[], int n, int key);

int main() {

    int a[]={1,3,5,2,4}, key=5, P;
    P = linear_search(a, sizeof(a)/sizeof(int), key);
    if(P>0)
        printf("The position of the element %d is %d", key, P);
    else
        printf("The element %d was not found");
    return 0;

}

int linear_search(int arr[], int n, int key) {
    int p = -1;
    for(int i=0; i<n; i++)
        if(arr[i] == key) {
            p = i;
            break;
        }
    return p;

}
