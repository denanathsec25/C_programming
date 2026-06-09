#include<stdio.h>
int main(){
    int n;
    int found =0;
    scanf("%d",&n);
    int arr[n];
    int num;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            printf("%d",i+1);
            found =1;
            break;
        }
        
    }
    if(found ==0){
        
            printf("No search element found");
        
    }
}