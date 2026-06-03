#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5,6,7};
    int *p=&a[4];
    printf("%d",*(p--));
    printf("\n%d",*(--p));
}