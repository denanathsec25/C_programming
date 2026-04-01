#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],eve[n],odd[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            eve[x]=arr[i];
            x++;
        }
        else{
            odd[y]=arr[i];
            y++;
        }
    }
    printf("%d\n",x);
    for(int i=0;i<x;i++){
        printf("%d ",eve[i]);
    }
    printf("\n%d\n",y);
    for(int i=0;i<y;i++){
        printf("%d ",odd[i]);
    }
}