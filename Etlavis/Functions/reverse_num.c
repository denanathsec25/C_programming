#include<stdio.h>
int disp_reverse_number(int);
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",disp_reverse_number(num));
    return 0;
}
int disp_reverse_number(int n){
    int rev=0,x=n,count=0,m;
    for(;x>0;count++){
        x=x/10; 
    }
    for(int i=0;i<count;i++){
        m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    return rev;
}