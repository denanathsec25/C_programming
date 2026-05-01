#include<stdio.h>
int oe(int);
int main(){
    int num,dec;
    scanf("%d",&num);
    dec=oe(num);
    if(dec==0){
        printf("even");
    }
    else{
        printf("Odd");
    }

    return 0;
}
int oe(int m){
    return m%2;
}