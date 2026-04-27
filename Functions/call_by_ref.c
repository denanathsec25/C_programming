#include<stdio.h>
int fun(int*,int*);
int main(){
    int x=20,y=10;
    fun(&x,&y);
    printf("%d\n%d",x,y);
}

int fun(int *ptr1,int *ptr2){
    *ptr1=5;
    *ptr2=30;
}