#include<stdio.h>
#include<math.h>

int check_first_2digits_prime(int);

int main(){
    int num;
    scanf("%d",&num);
    check_first_2digits_prime(num);
    return 0;
}

int check_first_2digits_prime(int n){
    int o,t;
    o=n%10;
    n=n/10;
    t=n%10;
    int to=t*10+o;
    int p=1;
    for(int i=2;i<=sqrt(to);i++){
        if(to%i==0){
            printf("Not a prime.");
            p=0;
            break;
        }
    }
    if(p==1){
        printf("Prime");
    }
}