#include<stdio.h>
int main(){
    int x= 10;
    int *ptr = &x;
    *ptr = 4;
    printf("%d",*ptr);

    printf("\n----------------\n");
    int *ptr1;
    ptr1=&x;
    printf("%d",*ptr1);
    printf("\n----------------\n");
    int i =10;
    int *p,*q;
    p=&i;
    q=p;
    printf("%d %d",*p ,*q);
    printf("\n----------------\n");
    int j=1;
    int *a=&j;
    int *b;
    b=a;
    *b=5;
    printf("%d",*a);
    return 0;
}