#include<stdio.h>
void increment(int*,int);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    increment(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void increment(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]++;
    }
}