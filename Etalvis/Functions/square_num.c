#include<stdio.h>
#include<math.h>

int disp_single_digit_square(int);

int main(){
    int num;
    scanf("%d",&num);
    disp_single_digit_square(num);
    return 0;
}

int disp_single_digit_square(int n){
    int count=0;
    while(n>0){
        int num=n%10;
        n=n/10;
        int sqr = sqrt(num);
        if(num==sqr*sqr){
            count++;
        }
        
    }
    printf("%d",count);
    
}