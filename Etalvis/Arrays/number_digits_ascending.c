#include<stdio.h>
int main(){
    int arr[1000];
    int asen[1000];
    int count=0;
    for(int i=0;i<1000;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0) break;
        count++;
    }

    for(int i=0;i<count;i++){
        int sum=0;
        while(arr[i]>0){
            sum+=arr[i]%10;
            arr[i]/=10;
        }
        asen[i]=sum;
    }

    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(asen[i]>asen[j]){
                int temp=asen[i];
                asen[i]=asen[j];
                asen[j]=temp;
            }
        }
    }
    for(int i=0;i<count;i++){
        printf("%d\n",asen[i]);
    }
}