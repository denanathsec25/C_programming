#include<stdio.h>
int sqr(int);
int main(){
    int num,dec;
    scanf("%d",&num);
    printf("%d",sqr(num));
    

    return 0;
}
int sqr(int m){
    return m*m;
}