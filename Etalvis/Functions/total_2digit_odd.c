#include<stdio.h>
#include<math.h>

int disp_total_2digit_odd(int);

int main(){
    int num;
    scanf("%d",&num);
    disp_total_2digit_odd(num);
    return 0;
}

int disp_total_2digit_odd(int n){
    int count=0;
    while(n>=10){
        int num=n%100;
        n=n/10;

        if (num%2==1){
            count++;
        }     
        
    }
    printf("%d",count);
    
}