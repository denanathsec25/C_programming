#include<stdio.h>
int disp_sum(int);
int main(){
    int a,sum;
    scanf("%d",&a);
    sum=disp_sum(a);
    printf("%d",sum);
}
int disp_sum(int m){
    int add=0;
    for(int i=1;i<=m;i++){
        add=add+i;

    }
    return add;
}