#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int biggest=arr[0];
    for(int i=1;i<5;i++){
        if(biggest<arr[i]){
            biggest=arr[i];
        }
    }
    printf("%d",biggest);
}