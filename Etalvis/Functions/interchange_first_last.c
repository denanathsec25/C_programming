#include<stdio.h>
#include<math.h>
int disp_interchange_first_last_digit(int );
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",disp_interchange_first_last_digit(num));
    return 0;
}

int disp_interchange_first_last_digit(int num){
    int x=num;
    int count =0;
    for(;x>0;count++){
        x=x/10;
    }
    int power = 1;
    power=power*pow(10,count-1);
    
    int last=num/power;
    int first=num%10;
    int res = num - last*power - first;
    int temp=first;
    first=last;
    last=temp;
    int fin_res = res + last*power + first;
    return (fin_res);

}