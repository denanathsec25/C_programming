#include<stdio.h>
int add(int,int);
int main(){
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("%d",sum);
}
int add(int m,int n){
    int add = m+n;
    return add;
}