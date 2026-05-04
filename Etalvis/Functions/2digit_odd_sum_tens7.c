#include<stdio.h>
int disp_2digit_odd_sum_tens7();
int main(){
    disp_2digit_odd_sum_tens7();
    return 0;
}
int disp_2digit_odd_sum_tens7(){
    int sum=0;
    for(int i=11;i<100;i++){
        if(i%2==1){
            if(i/10==7){
                sum+=i;
            }
        }
    }
    printf("%d",sum);
    
}