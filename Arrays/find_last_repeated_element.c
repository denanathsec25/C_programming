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
    int found=0;
    for(int i=n-1;i>=0;i--){
        if(hash[arr[i]]>1){
            printf("%d",arr[i]);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("No repeated elements found.");
    }
    return 0;
}