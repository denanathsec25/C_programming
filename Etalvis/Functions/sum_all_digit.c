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
    int sum=0;
    int x=n;
    for(;x>0;count++){
        x=x/10;
    }
    for(int i=0;i<count;i++){
        int m=n%10;
        sum+=m;
        n=n/10;

    }
    return sum;
}
