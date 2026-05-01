#include<stdio.h>
int lar_arr(int*,int);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = lar_arr(arr,n);
    printf("%d",max);
    return 0;
}
int lar_arr(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
