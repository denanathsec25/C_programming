#include<stdio.h>
int main(){
    int arr[1000];
    for(int i=0;i<1000;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0) break;
    }

    if(arr[0]==arr[3]){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}