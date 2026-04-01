#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int hash[10000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]!=0){
            if(arr[i]%2==0){
                printf("%d\n",arr[i]);
                hash[arr[i]]=0;
            }
            else{
                printf("%d\n",arr[i]);
            }
         }
    }
}