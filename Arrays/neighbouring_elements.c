#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num,x;
    scanf("%d",&num);
    printf("\n");
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            x=i;
            break;
        }
    }
    if(x==0){
        printf("%d",arr[1]);

    }
    else if(x==n-1){
        printf("%d",arr[n-2]);
    }
    else{
        
            printf("%d %d",arr[x-1],arr[x+1]);
        
    }
}