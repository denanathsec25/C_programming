#include<stdio.h>
int disp_sum();
int main(){
    int sum;
    sum=disp_sum();
    printf("%d",sum);
}
int disp_sum(){
    int add=0;
    for(int i=1;i<=5;i++){
        add=add+i;

    }
    return add;
}