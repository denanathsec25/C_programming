#include<stdio.h>
#include<math.h>

int disp_count_sum14();

int main(){
    disp_count_sum14();
    return 0;
}

int disp_count_sum14(){
    int sum=0,count=0;
    for(int i=1;i<100000;i++){
        int temp=i;
        if(sum==14){
            count++;
        }
        sum=0;
        while(temp>0){
            sum=sum+temp%10;
            temp=temp/10;
        }
    }    
    printf("%d",count);
    
}