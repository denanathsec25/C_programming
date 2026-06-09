#include<stdio.h>
int modify(int *);
int main(){
    int num = 10;
    printf("%d",modify(&num));
    return 0;
}
int modify(int *num){
    *num=50;
    return *num;
}