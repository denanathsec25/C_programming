#include<stdio.h>
int main(){
    int n,sum=0;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int grt=arr[0];
    for(int i=1;i<n;i++){
        if(grt<arr[i]){
            grt=arr[i];
        }
    }
    for(int i=0;i<n;i++){
      
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
        }
        if(arr[i]>sum){
            arr1[count]=arr[i];
            count++;
            
        }
        sum=0;
    }
    count=count+1;
    arr1[count-1]=grt;
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(arr1[i]>arr1[j]){
                int temp=arr1[j];
                arr1[j]=arr1[i];
                arr1[i]=temp;
            }
        }
    }
    for(int i=0;i<count;i++){
        printf("%d\n",arr1[i]);
    }

    
}