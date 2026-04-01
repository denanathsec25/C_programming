#include<stdio.h>

int main(){
    int arr[9000];
    int temp;
    scanf("%d",&temp);
for (int i=0;i<temp;i++){
    scanf("%d",&arr[i]);

}
for(int i=temp-1;i>=0;i--){
    printf("%d",arr[i]);
}
}