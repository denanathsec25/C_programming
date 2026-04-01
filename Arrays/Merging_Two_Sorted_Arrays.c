#include<stdio.h>

int main()
{
    int arr[1000];
    int arr1[500];
    int arr2[1500];
    int temp;
    int temp1,temp2;

    scanf("%d",&temp);
    printf("\n");
    scanf("%d",&temp1);

    for(int i=0;i<temp;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<temp1;i++){
        scanf("%d",&arr1[i]);
    }
    
    int x=0;
    for(int i=0;i<temp;i++){
        arr2[x]=arr[i];
        x++;
    }

    int y=temp;
    for(int i=0;i<temp1;i++){
        arr2[y]=arr1[i];
        y++;
    }

    //TO MAKE ASCENDING
    temp2 = temp1 + temp;
    for(int i=0;i<temp2;i++){
        for(int j=i+1;j<temp2;j++){
            if(arr2[i]>arr2[j]){
                int swap=arr2[j];
                arr2[j]=arr2[i];
                arr2[i]=swap;
            }
        }
    }


    temp2 = temp1 + temp;
    for (int i = 0; i < temp2; i++)
    {
        printf("%d\n", arr2[i]);
    }
    
}