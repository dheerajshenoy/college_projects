#include <stdio.h>


int main() {
    static int a = 12;
    for(int i=0; i<10; i++) {
        a = i;
        printf("%d\t", a);
    }
    printf("%d\n", a);
}
