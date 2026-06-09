#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int num;
    scanf("%d",&num);
    
    for(int i=0;i<num;i++){
        int temp=arr[0];
        for(int j=0;j<n;j++){
            arr[j]=arr[j+1];
            }
        arr[n-1]=temp;

    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}