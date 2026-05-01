#include<stdio.h>
int sum_arr(int*,int);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int  sum = sum_arr(arr,n);
    printf("%d",sum);

    return 0;
}
int sum_arr(int arr[],int n){
    int sum =0;
     for(int i=0;i<n;i++){
        sum = sum+arr[i];
     }

     return sum;
}