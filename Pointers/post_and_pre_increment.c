#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5,6};
    int *p=&a[0];

    //Post increment
    printf("%d",*(p++));
    printf("\n%d",*p);

    //now p is in a[1] so now we can perform pre increment
    printf("\n\n%d",*(++p));
}