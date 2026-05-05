#include<stdio.h>
#include<math.h>
int main(){
    int arr[5];
    int arr1[10];
    int count=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<5;i++){
        int p=1;

        if(arr[i]<2){
            p=0;
        }
        
        for(int j=2;j<=sqrt(arr[i]);j++){
            if(arr[i]%j==0){
                p=0;
                break;
            }
        }
        if(p==1){
            arr1[count]=arr[i];
            count++;
        }
    }

    for(int i=0;i<count;i++){
        printf("%d",arr1[i]);
    }
}