#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int hash[1000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;   
    }
    int val=0;
    for(int i=0;i<n;i++){
        if(hash[arr[i]]!=0){
            if(hash[arr[i]]>n/2){
                val=arr[i];
            }
        }
    }
    if(val==0){
        printf("No majority elements found.");
    }
    else{
        printf("%d",val);
    }
}