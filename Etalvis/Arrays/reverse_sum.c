#include<stdio.h>
int main(){
    int arr[5];
    int rev[5];

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int num=0;
    for(int i=0;i<5;i++){
        num=0;
        while(arr[i]>0){
            num=num*10+arr[i]%10;
            arr[i]/=10;
        }
        rev[i]=num;
    }

    int sum=0;
    for(int i=0;i<5;i++){
        sum+=rev[i];
    }

    printf("%d",sum);
}