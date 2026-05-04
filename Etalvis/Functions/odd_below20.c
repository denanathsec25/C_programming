#include<stdio.h>
int disp_2digit_odd_below20();
int main(){
    disp_2digit_odd_below20();
    return 0;
}
int disp_2digit_odd_below20(){

    for(int i=11;i<=20;i++){

        if(i%2==1){
            printf("%d\n",i);
        }

    }
    
}