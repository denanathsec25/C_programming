#include<stdio.h>
int main(){
    int arr[1000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=0;
    for(int i=n;i<n+n;i++){
        arr[i]=arr[x];
        x++;
    }
    for(int i=0;i<n+n;i++){
        printf("%d ",arr[i]);
    }
}