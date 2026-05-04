#include<stdio.h>
#include<math.h>

int disp_total_odd_digit(int);

int main(){
    int num;
    scanf("%d",&num);
    disp_total_odd_digit(num);
    return 0;
}

int disp_total_odd_digit(int n){
    int count=0;
    while(n>0){
        int num=n%10;
        n=n/10;

        if (num%2==1){
            count++;
        }     
        
    }
    printf("%d",count);
    
}