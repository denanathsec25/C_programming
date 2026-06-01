#include<stdio.h>

void minmax(int *,int,int *,int *);
int main(){
    int min,max;
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    minmax(arr,n,&min,&max);
    printf("%d %d",min,max);
}

void minmax(int arr[],int n,int *min,int *max){
        *min=*max=arr[0];

        for(int i=1;i<n;i++){
            if(arr[i]>*max){
                *max=arr[i];
            }
            if(arr[i]<*min){
                *min=arr[i];
            }
        }

}