#include<stdio.h>
int main(){
    int arr[10000];
    int n;
    int del;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&del);
    int x=0;
    for(int i=0;i<n;i++){
        if(del==arr[i]){
            x=i;
            break;
        }
    }
    for(int i=x;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
}