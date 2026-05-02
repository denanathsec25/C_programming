#include<stdio.h>
int disp_rsum(int);
int main(){
    int a,sum;
    scanf("%d",&a);
    sum=disp_rsum(a);
    printf("%d",sum);
}
int disp_rsum(int m){
    int add=0;
    for(int i=m;i>=1;i--){
        add=add+i;

    }
    return add;
}