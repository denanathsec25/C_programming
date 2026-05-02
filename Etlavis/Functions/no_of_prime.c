#include<stdio.h>
#include<math.h>

int no_prime(int);

int main(){
    int num;
    scanf("%d",&num);
    no_prime(num);
    return 0;
}

int no_prime(int n){
    int count=0;
    while(n>0){
        int num=n%10;
        n=n/10;

        int flag =1;

        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                flag=0;
                break;
            }
        }

        if(flag==1){
            count++;
        }
        
    }
    printf("%d",count);
    
}