#include <stdio.h>

int main() {
    int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *p = &a[1], *q = &a[5];

    printf("%d\n", *p > *q);
    printf("%d\n", *p < *q);
    q=&a[1];
    printf("%d\n", *p == *q);
    printf("%d\n", *p != *q);
    printf("%d\n", *p <= *q);
    
    return 0;
}