#include<stdio.h>
#include<math.h>
int disp_lcm3(int ,int ,int );
int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("%d",disp_lcm3(num1,num2,num3));
    return 0;
}
int disp_lcm3(int num1,int num2,int num3){
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
    int lcm2 = (num12/gcd);


    int num123=lcm2*num3;
    int gcd1;
    int min1=lcm2;
    if(lcm2>num3){
        min1=num3;
    }
    for(int i=1;i<=min1;i++){
        if(lcm2%i==0 && num3%i==0){
            gcd1=i;
        }
    }
    return (num123/gcd1);
}