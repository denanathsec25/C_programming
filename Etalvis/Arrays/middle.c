#include<stdio.h>
int main(){
    int arr[10000];
    int count=0;
    for(int i=0;i<10000;i++){
        
            scanf("%d",&arr[i]);
            if(arr[i]==0) break;
            count++;
        
    }
    if(count%2==1){
        printf("%d",arr[count/2]);
    }
    else{
        float sum=arr[count/2]+arr[(count/2)-1];
        printf("%f",sum/2.0);
    }
}