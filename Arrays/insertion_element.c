#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num,val;
    scanf("%d %d",&num,&val);
    for(int i=n;i>=num;i--){
        arr[i]=arr[i-1];
    }
    arr[num-1]=val;
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}