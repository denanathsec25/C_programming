#include<stdio.h>
#include<math.h>
void check_prime_and_sum14(int);
int main(){
    int num;
    scanf("%d",&num);
    check_prime_and_sum14(num);
    return 0;
}
void check_prime_and_sum14(int n)
{
    if(n <= 1){
        printf("Not Prime");
        return;
    }
    int p=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            printf("Not a prime & ");
            p=0;
            break;
        }

    }
    if(p==1){
        printf("Prime & ");
    }
    for(int i=0;i<n;i++){
        int sum=n/10 + n%10;
        if(sum = 14){
            printf("Sum of digits is 14.");
            break;
        }
        else{
            printf("Sum of digits is not 14.");
            break;
        }
    }
}