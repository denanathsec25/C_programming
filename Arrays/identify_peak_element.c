#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]>arr[j]){
                int swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;

            }
        }
    }

    printf("\nThe peak element in the array is %d",arr[num-1]);

}