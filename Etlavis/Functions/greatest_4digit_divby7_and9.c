#include<stdio.h>
#include<math.h>

int disp_biggest_4digit_div7_9();

int main(){
    disp_biggest_4digit_div7_9();
    return 0;
}

int disp_biggest_4digit_div7_9(){
    int grt=0;
    for(int i=1000;i<10000;i++){
        if(i%7==0 && i%9==0){
            grt=i;

        }
    }
        
    
    printf("%d",grt);
    
}
