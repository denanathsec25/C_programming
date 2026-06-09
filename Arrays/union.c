#include<stdio.h>
int main(){
    int n,n1;
    scanf("%d %d" ,&n,&n1);
    int arr[n],arr1[n1];
    int hash[1000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
        hash[arr1[i]]++;
    }
    for(int i=0;i<1000;i++){
        if(hash[i]!=0 ){
            
                printf("%d ",i);

            
            hash[i]=0;
            
         }
    }
}