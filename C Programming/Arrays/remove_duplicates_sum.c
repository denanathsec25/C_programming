#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int hash[1000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    int arr1[n],x=0;
    for(int i=0;i<n;i++){
        if(hash[arr[i]]!=0){
            arr1[x]=arr[i];
            hash[arr[i]]=0;
            x++;
        }

    }
    int sum=0;

    for(int i=0;i<x;i++){
        sum=sum+arr1[i];
    }
    printf("%d",sum);
}