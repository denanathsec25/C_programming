#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int eve[1000];
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            eve[count]=arr[i];
            count++;
        }
    }
    for(int i=0;i<count;i++){
        printf("%d ",eve[i]);
    }

}