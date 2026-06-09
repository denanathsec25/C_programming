#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("0");
    }
    else{
        int arr[32];
        int count=0;
        for(int i=0;num>0;i++)
        {
            
            arr[i]=num%2;
            num=num/2;
            count ++;
        }
        for(int i=count-1;i>=0;i--){
            printf("%d",arr[i]);
        }
    }
}