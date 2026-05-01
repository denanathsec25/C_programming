#include<stdio.h>
int sum(int);
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;
}
int sum(int m){
    int add=0;
    for(;m>0;m=m/10){
        add=add+ m%10;
        
    }
    return add;
}