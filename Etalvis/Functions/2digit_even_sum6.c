#include<stdio.h>
int disp_2digit_odd_sum7();
int main(){
    disp_2digit_odd_sum7();
    return 0;
}
int disp_2digit_odd_sum7(){
    int f,l;
   
    for(int i=11;i<100;i++){
    f=i/10;
    l=i%10;
        if(f+l == 6){

            if(i%2==0){
                printf("%d\n",i);
            }
        }

    }
    
}