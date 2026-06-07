#include<stdio.h>
int main(){
    int arr[3][4];
    int *p;
    for(p=&arr[0][0];p<=&arr[2][3];p++){
        scanf("%d",p);
    }

    for(p=&arr[0][0];p<=&arr[2][3];p++){
        printf("%d ",*p);
    }
}