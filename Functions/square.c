#include<stdio.h>
int oe(int);
int main(){
    int num,dec;
    scanf("%d",&num);
    printf("%d",oe(num));
    

    return 0;
}
int oe(int m){
    return m*m;
}