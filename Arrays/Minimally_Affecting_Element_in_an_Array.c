#include<stdio.h>

int main()
{
    int arr[1000];
    int temp;
    int sum=0;
    int grst;
    float avg;

    printf("Enter the number of elements : ");
    scanf("%d",&temp);

    for(int i=0;i<temp;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<temp;i++){
        sum+=arr[i];
    }

    avg=(float)sum/temp;

    printf("\nAverage=%.2f",avg);

   for(int i=1;i<temp;i++){
    grst=arr[0];
    if(grst<arr[i]){
    grst=arr[i];
    }
   }
   
   printf("\nMininal affector = %d",grst);

}
