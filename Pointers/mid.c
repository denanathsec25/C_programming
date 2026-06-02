#include<stdio.h>
int *findmid(int *,int);

int main(){
    //Lets use pre declared array here

    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int *mid = findmid(a,n);
    printf("%d",*mid);
}

int *findmid(int arr[],int n)
{
    return &arr[n/2];
}