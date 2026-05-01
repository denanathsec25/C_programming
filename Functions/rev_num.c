#include<stdio.h>
#include<math.h>
int rev(int);
int main(){
    int num;
    scanf("%d",&num);
    int rev1 = rev(num);
    printf("%d",rev1);
    return 0;
}
int rev(int n){
    int m=0,x=n;
    int count=0;
    for(int i=0;x>0;i++){
        x=x/10;
        count++;
    }
   count = count-1;
    for(int i=0;n>0;i++){
    
        m=m+(n%10)*pow(10,count);
        n=n/10;
        count--;

    }
    return m;
}