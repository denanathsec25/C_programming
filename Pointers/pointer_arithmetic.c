#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};

    int *p;
    p=&arr[0];
    p=p+3;
    printf("%d",*p);
}