#include<stdio.h>
int count_total_digits(int);
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",count_total_digits(num));
    return 0;
}
int count_total_digits(int n){
    int count=0;
    for(;n>0;count++){
        n=n/10;
    }
    return count;
}
