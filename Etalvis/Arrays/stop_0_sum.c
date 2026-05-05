#include<stdio.h>
int main(){
    int arr[10000];
    int count=0;
    for(int i=0;i<10000;i++){
        
            scanf("%d",&arr[i]);
            if(arr[i]==0) break;
            count++;
        
    }

    int sum=0;
    for(int i=0;i<count;i++){
        sum+=arr[i];
    }
    printf("%d\n",count);
    printf("%d",sum);

}