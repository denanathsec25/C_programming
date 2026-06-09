#include<stdio.h>
int main(){
    int a[]={12,45,43,65,67};
    int *p;
    int sum=0;

    for(p=&a;p<=&a[4];p++){
        sum += *p;
    }

    printf("%d",sum);
}