#include<stdio.h>
int main(){
    int arr[5];
    int hash[1000]={0};
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    for(int i=0;i<1000;i++){
        if(hash[i]>0){
            if(hash[i]==1){
                printf("%d ",i);
                hash[i]--;
            }
            else{
                for(int j=hash[i];j>0;j--){
                    printf("%d ",i);
                }
                hash[i]=0;
            }
        }
    }
}
    
