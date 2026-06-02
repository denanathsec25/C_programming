#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8};

    int *p;
    p=&arr[0];
    //Addition
    p=p+3;
    printf("%d",*p);
    //Subraction
    p=p-3;
    printf("\n%d",*p);
}