#include<stdio.h>
#include<math.h>
void prime(int);
int main(){
    int num;
    scanf("%d",&num);
    prime(num);
    return 0;
}
void prime(int n)
{
    if(n <= 1){
        printf("Not Prime");
        return;
    }
    int p=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            printf("Not a prime");
            p=0;
            break;
        }

    }
    if(p==1){
        printf("Prime");
    }
}