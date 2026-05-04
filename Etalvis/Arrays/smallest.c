#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int smallest=arr[0];
    for(int i=1;i<5;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    printf("%d",smallest);
}