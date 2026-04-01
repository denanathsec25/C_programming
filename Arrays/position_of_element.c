#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int key,nn;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            nn=i;
            break;
        }
    }
    printf("%d",nn);
}