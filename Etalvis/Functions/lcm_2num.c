#include<stdio.h>
#include<math.h>
int disp_lcm2(int ,int );
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",disp_lcm2(num1,num2));
    return 0;
}
int disp_lcm2(int num1,int num2){
    int num12=num1*num2;
    int gcd;
    int min=num1;
    if(num1>num2){
        min= num2;
    }
    for(int i=1;i<=min;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    return (num12/gcd);
}