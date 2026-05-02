#include<stdio.h>
#include<math.h>

int middle_2digits_prime(int);

int main(){
    int num;
    printf("Enter a 4 digit number: ");
    scanf("%d",&num);
    middle_2digits_prime(num);
    return 0;
}

int middle_2digits_prime(int n){
    int t,h;
    n=n/10;
    t=n%10;
    n=n/10;
    h=n%10;
    int ht=h*10+t;
    int p=1;
    for(int i=2;i<=sqrt(ht);i++){
        if(ht%i==0){
            printf("Not a prime.");
            p=0;
            break;
        }
    }
    if(p==1){
        printf("Prime");
    }
}