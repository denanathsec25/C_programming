#include<stdio.h>
void memcopy(int*,int*,int);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int copy[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    memcopy(arr,copy,n);

    for(int i=0;i<n;i++){
        printf("%d",copy[i]);
    }
}

void memcopy(int arr[],int copy[],int n){
    for(int i=0;i<n;i++){
        copy[i]=arr[i];
    }
}