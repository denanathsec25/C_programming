#include<stdio.h>
int disp_rsum();
int main(){
    int sum;
    sum=disp_rsum();
    printf("%d",sum);
}
int disp_rsum(){
    int add=0;
    for(int i=6;i>=1;i--){
        add=add+i;

    }
    return add;
}